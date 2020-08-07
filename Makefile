CC=gcc
CFLAGS=-I.
DEPS = singlyLList.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testingLL: testLinkedList.o singlyLList.o 
	$(CC) -o testingLL testLinkedList.o singlyLList.o 

clean: 
	$(RM) count *.o *~
