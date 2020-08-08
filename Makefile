CC=gcc
CFLAGS=-I.

OBJ_LL = testLinkedList.o singlyLList.o 
DEPS_LL = singlyLList.h 

OBJ_ST = testStack.o ArrayStack.o
DEPS_ST = ArrayStack.h

%.o: %.c $(DEPS_LL)
	$(CC) -c -o $@ $< $(CFLAGS)

%.o: %.c $(DEPS_ST)
	$(CC) -c -o $@ $< $(CFLAGS)

all: testingLL testingSt

testingLL: $(OBJ_LL)
	$(CC) -o $@ $^ $(CFALGS) 

testingSt: $(OBJ_ST) 
	$(CC) -o $@ $^ $(CFALGS) 

clean: 
	$(RM) count *.o *~
