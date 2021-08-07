.PHONY: all
all: test1

.PHONY: test1
test1: echo_removespace
	./echo_removespace

.PHONY: test2
test2: echo_creatingnewline
	./echo_creatingnewline

.PHONY: test3
test3: echo_horizontaltabspace
	./echo_horizontaltabspace

echo: echo_removespace.o echo_creatingnewline.o echo_horizontaltabspace.o

.PHONY: clean
clean::
	$(RM) echo_removespace *.[adios]
	$(RM) echo_creatingnewline *.[adios]
	$(RM) echo_horizontaltabspace *.[adios]
