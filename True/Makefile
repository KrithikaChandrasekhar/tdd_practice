.PHONY: all
all: test

.PHONY: test
test: true_test
	./true_test

true_test: true_test.o true.o led.o

.PHONY: clean
clean::
	$(RM) true_test *.[adios]
