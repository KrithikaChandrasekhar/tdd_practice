.PHONY: all
all: test

.PHONY: test
test: echo
	./echo "Hello"

echo_test: echo.o

.PHONY: clean
clean::
	$(RM) echo *.[adios]
