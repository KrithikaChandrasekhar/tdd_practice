SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: echo
	diff <(echo) <(./echo)
	diff <(echo -n "foo bar"| wc -m) <(./echo "foo bar")
	./echo
	./echo foo
	./echo "foo bar"

echo: echo.o

.PHONY: clean
clean::
	$(RM) echo *.[adios]
