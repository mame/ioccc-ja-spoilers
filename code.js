(function () {
  const $program = document.getElementById("program");

  const program_opts = { theme: "midnight", mode: null, readOnly: "nocursor", tabSize: 8 };
  if ($program.className && $program.className.startsWith("tabsize-")) {
    program_opts.tabSize = parseInt($program.className.slice(8));
  }
  const $program_codeMirror = CodeMirror.fromTextArea($program, program_opts);

  const $programHighlihght = document.getElementById("program-highlight");
  $programHighlihght.addEventListener("change", function(event) {
    $program_codeMirror.setOption("mode", $programHighlihght.checked ? "clike" : null);
  });

  const $programLinewrap = document.getElementById("program-linewrap");
  $program_codeMirror.setOption("lineWrapping", $programLinewrap.checked);
  $programLinewrap.addEventListener("change", function(event) {
    $program_codeMirror.setOption("lineWrapping", $programLinewrap.checked);
  });

  const $diff = document.getElementById("diff");
  if ($diff) {
    const diff_opts = { theme: "midnight", mode: "diff", readOnly: "nocursor", tabSize: 8 }
    if ($diff.className && $diff.className.startsWith("tabsize-")) {
      diff_opts.tabSize = parseInt($diff.className.slice(8));
    }
    const $diff_codeMirror = CodeMirror.fromTextArea($diff, diff_opts);
  }
})();
