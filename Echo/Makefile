.PHONY: all
all: test

.PHONY: test
test: Echo
	./Echo "Hello"

Echo: Echo.o

.PHONY: clean
clean::
	$(RM) Echo *.[adios]
