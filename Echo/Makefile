SHELL:=/bin/bash

.PHONY: all
all: test

.PHONY: test
test: echo
	./echo foo
	./echo "foo bar"
#	diff <(echo) <(./echo)
#	diff <(echo "foo bar") <(./echo "foo bar")
#	diff <(echo foo bar) <(./echo foo bar)
.PHONY: clean
clean::
	$(RM) echo *.[adios]
