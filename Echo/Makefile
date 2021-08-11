.PHONY: all
all: test

.PHONY: test
test: echo
	./echo
	./echo foo
	./echo "foo bar"

echo: echo.o

.PHONY: clean
clean::
	$(RM) echo *.[adios]
