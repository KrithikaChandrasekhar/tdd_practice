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

.PHONY: test4
test4: echo_notrailingnewline
	./echo_notrailingnewline

echo: echo_removespace.o echo_creatingnewline.o echo_horizontaltabspace.o echo_notrailingnwline.o

.PHONY: clean
clean::
	$(RM) echo_removespace *.[adios]
	$(RM) echo_creatingnewline *.[adios]
	$(RM) echo_horizontaltabspace *.[adios]
	$(RM) echo_notrailingnewline *.[adios]
