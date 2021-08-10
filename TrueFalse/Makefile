.PHONY: all
all: test

.PHONY: test
test: TrueFalse_test
	./TrueFalse_test

TrueFalse_test: TrueFalse_test.o

.PHONY: clean
clean::
	$(RM) TrueFalse_test *.[adios]
