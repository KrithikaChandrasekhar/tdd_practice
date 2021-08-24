SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: head
	diff <(<text.txt head) <(<text.txt ./head)
	diff <(head -n 10 text.txt) <(./head text.txt)
	diff <(head binaryfile.bin) <(./head binaryfile.bin)
	diff <(head -n 10 text.txt file1.txt) <(./head text.txt file1.txt)
	diff <(head -n 10 text.txt file1.txt filenotindirectory) <(./head text.txt file1.txt filenotindirectory)

.PHONY: clean
clean::
	$(RM) head *.[adios]
