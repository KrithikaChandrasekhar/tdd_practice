.PHONY: all
all: test

.PHONY: test
test: false
	./false
	echo $?

false: false.o

.PHONY: clean
clean::
	$(RM) false *.[adios]
