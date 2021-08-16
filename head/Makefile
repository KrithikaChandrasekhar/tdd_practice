SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: head
	diff <(head text.txt) <(./head text.txt)

head: head.o

.PHONY: clean
clean::
	$(RM) head *.[adios]
