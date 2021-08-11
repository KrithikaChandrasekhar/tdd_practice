# 'echo'
'echo' is a unix program that prints text.

## Test strategy
- We are re-implementing an existing program. Our main strategy is to ensure that given the same input, our program produces the same output
as reference original (golden master testing).

## Test cases
- When calling 'echo' without arguments, then it prints a single new line character.
- When calling 'echo foo', then it prints "foo" followed by a new line character.
- When calling 'echo foo bar',then it prints "foo bar" followed by a new line character.
