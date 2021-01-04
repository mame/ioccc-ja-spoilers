require "cgi/escape"

Dir.glob(File.join(__dir__, "_src/*/*")).sort.each do |file|
  d, filename = File.split(file)
  d, year = File.split(d)

  case
  when file.end_with?(".new.c")
    orig_file = file.sub(/\.new\.c$/, ".c")
    label = File.basename(orig_file)
    patch = File.join(__dir__, "patches/#{ year }-#{ File.basename(orig_file, ".c") }.patch")
    File.open(patch, "w") do |out|
      system("diff", "-au", "--label", label, orig_file, "--label", label, file, out: out)
    end
    file = patch
    inc = File.basename(patch)
  when file.end_with?(".c")
    inc = "#{ year }-#{ File.basename(file) }"
  else
    raise file
  end

  # generate a html-escaped inc file
  src = File.read(file, encoding: "BINARY")
  src = src.gsub("\r\n", "\n").chomp
  src = src.gsub(/\{[\{%]/) { %({{ "#{ $& }" }}) }
  src = CGI.escapeHTML(src)
  src = src.gsub(/[\x00-\x08\x0b-\x1f\x7f-\xff]/n) { c = "&#x%04x;" % $&.ord }
  src.force_encoding("UTF-8")

  target = File.join(__dir__, "_includes/#{ inc }.inc")
  p inc
  if !File.readable?(target) || File.read(target) != src
    File.write(target, src)
  end
end

Dir.glob(File.join(__dir__, "*/*.md")).sort.each do |file|
  src = File.read(file)
  src = src.gsub(/\[\[\[(\d{4}\/\w+)\]\]\]\(\{\{ site\.baseurl \}\}\{% link \1\.md %\}\)|\[\[(\d{4}\/\w+)\]\]（未執筆）/) do
    entry = ($1 || $2)
    if File.readable?(File.join(__dir__, entry + ".md"))
      "[[[#{ entry }]]]({{ site.baseurl }}{% link #{ entry }.md %})"
    else
      "[[#{ entry }]]（未執筆）"
    end
  end
  File.write(file, src)
end
