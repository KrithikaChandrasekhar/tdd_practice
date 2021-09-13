SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: head
	diff <(<text.txt head) <(<text.txt ./head)
	diff <(head text.txt) <(./head text.txt)
	diff <(head text.txt binaryfile.bin) <(./head text.txt binaryfile.bin)
	diff <(head filenotfound binaryfile.bin text.txt) <(./head filenotfound binaryfile.bin text.txt)

.PHONY: clean
clean::
	$(RM) head *.[adios]
