require "cgi/escape"

Dir.glob(File.join(__dir__, "src/*/*")).sort.each do |file|
  d, filename = File.split(file)
  d, year = File.split(d)

  case
  when file.end_with?(".new.c")
    orig_file = file.sub(/\.new\.c$/, ".c")
    label = File.basename(orig_file)
    patch = File.join(__dir__, "static/patches/#{ year }-#{ File.basename(orig_file, ".c") }.patch")
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
  # Note: In the Jekyll era, {{ and {% were escaped as {{ "{{" }} etc.
  # With Hugo's readFile (which does not process templates), we skip that
  # and just HTML-escape normally.
  src = CGI.escapeHTML(src)
  src = src.gsub(/[\x00-\x08\x0b-\x1f\x7f-\xff]/n) { c = "&#x%04x;" % $&.ord }
  src.force_encoding("UTF-8")

  target = File.join(__dir__, "includes/#{ inc }.inc")
  p inc
  if !File.readable?(target) || File.read(target) != src
    File.write(target, src)
  end
end

Dir.glob(File.join(__dir__, "content/*/*.md")).sort.each do |file|
  src = File.read(file)
  src = src.gsub(/\[\[\[(\d{4}\/[\w\d\.]+)\]\]\]\(\{\{<\s*relref\s+"\/\1\/"\s*>\}\}\)|\[\[(\d{4}\/[\w\d\.]+)\]\](?:（未執筆）)?/) do
    entry = ($1 || $2)
    if File.readable?(File.join(__dir__, "content", entry + ".md"))
      "[[[#{ entry }]]]({{< relref \"/#{ entry }/\" >}})"
    else
      "[[#{ entry }]]（未執筆）"
    end
  end
  File.write(file, src)
end
