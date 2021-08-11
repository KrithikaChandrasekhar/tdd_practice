.PHONY: all
all: test

.PHONY: test
test: cat
	./cat text.txt
	./cat text.txt hello.txt
	./cat text.txt hi.txt
	./cat hi.txt
	./cat text.txt hi.txt hello.txt

cat: cat.o

.PHONY: clean
clean::
	$(RM) cat *.[adios]
