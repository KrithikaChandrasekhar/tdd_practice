.PHONY: all
all: test

.PHONY: test
test: echo
	./echo Hello World!

echo: echo.o

.PHONY: clean
clean::
	$(RM) echo *.[adios]
