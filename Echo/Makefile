.PHONY: all
all: test

.PHONY: test
test: echo
	./echo "Hello"

echo: echo.o

.PHONY: clean
clean::
	$(RM) echo *.[adios]
