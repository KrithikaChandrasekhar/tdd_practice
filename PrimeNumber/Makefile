.PHONY: all
all: test

.PHONY: test
test: PrimeNumber_test
	./PrimeNumber_test

PrimeNumber_test: PrimeNumber_test.o PrimeNumber.o

.PHONY: clean
clean:
	$(RM) PrimeNumber_test *.[adios]
