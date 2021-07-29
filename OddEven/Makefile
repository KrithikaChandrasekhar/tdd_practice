.PHONY: all
all: test

.PHONY: test
test: OddEven_test
	./OddEven_test

OddEven_test: OddEven_test.o OddEven.o

.PHONY: clean
clean::
	$(RM) OddEven_test *.[adios]
