# 'cat'

'cat' is a unix program that reads data from a file and give their contents as outputs. It helps to create, view & concatenate files.

## Test strategy
- We are re-implementing an existing program. Our main strategy will be to ensure that given the same input, our program produces same output
as reference original(golden master testing).

## Test cases
- When calling 'cat' without arguments, then it reads standard input.
- When calling 'cat text.txt', then it prints the file on standard output.
- When calling 'cat text.txt hello.txt', then it prints both the on standard output.
- When calling 'cat text.txt hi.txt', then it prints text.txt file and "cat: no such file or directory" on the standard output.
