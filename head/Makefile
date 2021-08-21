SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: head_buffer
	diff <(head -n 10 text.txt) <(./head_buffer text.txt)
	diff <(head -n 10 text.txt file1.txt) <(./head_buffer text.txt file1.txt)
	diff <(head -n 10 text.txt file1.txt filenotindirectory) <(./head_buffer text.txt file1.txt filenotindirectory)

.PHONY: clean
clean::
	$(RM) head_buffer *.[adios]
