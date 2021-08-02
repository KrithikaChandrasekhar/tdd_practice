.PHONY: all
all: test

.PHONY: test
test: LogicGates_test
	./LogicGates_test

LogicGates_test: LogicGates_test.o LogicGates.o

.PHONY: clean
clean::
	$(RM) LogicGates_test *.[adios]
