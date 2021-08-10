.PHONY: all
all: test

.PHONY: test
test: echo
	./echo *.[c]

echo: echo.o

.PHONY: clean
clean::
	$(RM) echo *.[adios]
