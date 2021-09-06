# 'head'

'head' is a unix program that reads data from a file and display the beginning of files as output.

## Test strategy
- We are re-implementing an existing progra. Our main strategy will be to ensure that give the same input, our program should produce same output as per golden master testing.
- Use diff to golden master test 'head' with its original implementation.

## Test cases
- When calling 'head' without arguments, then it reads standard input. Also, it reacts to EOF on STDIN.
- When calling 'head text.txt', then it prints first 10 lines on standard output.
- When calling 'head text.txt file1.txt', then it prints the file name followed by first 10 lines on standard output.
- When calling 'head text.txt file1.txt filenotfound', then it prints the file name followed by first 10 lines of the files and "head: filenotfound: no such file or directory" on the standard output.
