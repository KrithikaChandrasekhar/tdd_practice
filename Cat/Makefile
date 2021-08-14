 SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: cat
	diff <(cat text.txt) <(./cat text.txt)
	diff <(cat text.txt hello.txt) <(./cat text.txt hello.txt)
	diff <(cat filedoesnotexist.txt) <(./cat filedoesnotexist.txt)
	diff <(cat text.txt filedoesnotexist) <(./cat text.txt filedoesnotexist)
	diff <(cat text.txt filedoesnotexist.txt hello.txt) <(./cat text.txt filedoesnotexist.txt hello.txt)

cat: cat.o

.PHONY: clean
clean::
	$(RM) cat *.[adios]
