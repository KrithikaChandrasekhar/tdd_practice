SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: head_buffer
	diff <(head text.txt) <(./head_buffer text.txt)

head: head_buffer.o

.PHONY: clean
clean::
	$(RM) head_buffer *.[adios]
