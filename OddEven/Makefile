test: oddeven_test
	`test -f './test' || echo 'false/'`
	./oddeven_test
oddeven_test: oddeven_test.o oddeven.o
clean:
	$(RM) oddeven_test
