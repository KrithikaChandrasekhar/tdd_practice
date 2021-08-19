 SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: cat1
	diff <(cat text.txt) <(./cat1 text.txt)
	diff <(cat text.txt hello.txt) <(./cat1 text.txt hello.txt)
	diff <(cat filedoesnotexist.txt) <(./cat1 filedoesnotexist.txt)
	diff <(cat text.txt filedoesnotexist) <(./cat1 text.txt filedoesnotexist)
	diff <(cat text.txt filedoesnotexist.txt hello.txt) <(./cat1 text.txt filedoesnotexist.txt hello.txt)
	diff <(cat hello.bin) <(./cat1 hello.bin)

.PHONY: clean
clean::
	$(RM) cat *.[adios]
