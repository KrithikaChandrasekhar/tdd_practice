SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: tail
	diff <(text.txt tail) <(text.txt ./tail)
	diff <(tail text.txt) <(./tail text.txt)
	diff <(tail binaryfile.bin) <(./tail binaryfile.bin)
	diff <(tail text.txt file1.txt) <(./tail text.txt file1.txt)
	diff <(tail text.txt filedoesnotexist.txt) <(./tail text.txt filedoesnotexist.txt)

.PHONY: clean
clean::
	$(RM) tail *.[adios]
