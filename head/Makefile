SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: head
	diff <(<text.txt head) <(<text.txt ./head)
	diff <(head text.txt) <(./head text.txt)
	diff <(head binaryfile.bin) <(./head binaryfile.bin)
	diff <(head text.txt file1.txt) <(./head text.txt file1.txt)
	diff <(head text.txt file1.txt filenotfound) <(./head text.txt file1.txt filenotfound)

.PHONY: clean
clean::
	$(RM) head *.[adios]
