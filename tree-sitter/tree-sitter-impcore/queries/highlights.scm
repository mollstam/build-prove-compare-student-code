(comment) @comment

[
 "("
 ")"
] @punctuation.bracket

[
 "val"
 "define"
 "use"
 "check-expect"
 "check-assert"
 "check-error"
 "set"
 "if"
 "while"
 "begin"
 ] @keyword

(function_call (variable_name) @variable.parameter)
(formals (variable_name) @variable.parameter)

(variable_name) @variable

(function_name) @function

(numeral) @constant.numeric

(use_keyword (file_name) @string.unquoted)

