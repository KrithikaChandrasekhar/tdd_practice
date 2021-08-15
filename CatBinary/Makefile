SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: catbinary
	./catbinary file1.bin
	diff <(./catbinary file1.bin) <(xxd -l 20 -ps -c 20 file1.bin)

catbinary: catbinary.o

.PHONY: clean
clean::
	$(RM) catbinary *.[adios]
