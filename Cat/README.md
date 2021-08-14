# 'cat'

'cat' is a unix program that reads data from a file and give their contents as outputs. It helps to create, view & concatenate files.

## Test strategy
- We are re-implementing an existing program. Our main strategy will be to ensure that given the same input, our program produces same output
as reference original(golden master testing).
- Use diff to golden master test 'cat' with its original implementation.
- 'cat' for both text as well as binary handling.

## Test cases
- When calling 'cat' without arguments, then it reads standard input. Also it reacts to EOF on STDIN.
- When calling 'cat text.txt', then it prints the file on standard output.
- When calling 'cat text.txt hello.txt', then it prints both the on standard output.
- When calling 'cat text.txt filedoesnotexist', then it prints text.txt file and "cat: filedoesnotexist: no such file or directory" on the standard output.
- When calling 'cat' with a file/files which is/are in the project directory, then it prints it/them in the same sequenece on the standard output.
- When calling 'cat' with a file/files which is/are not in the project directory, then it prints "cat: no such file or directory" on the standard output.
- When calling 'cat Hello', then it prints the file on standard output.
