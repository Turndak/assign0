OOPTS = -Wall -Wextra -g -c
LOPTS = -Wall -Wextra -std=c99 -g

all: test-sll test-dll test-stack test-queue

test-sll: integer.o sll.o test-sll.o
	gcc $(LOPTS) -o test-sll integer.o sll.o test-sll.o

sll.o: sll.c sll.h
	gcc $(OOPTS) sll.c -std=c99

test-sll.o : test-sll.c integer.h sll.h
	gcc $(OOPTS) test-sll.c -std=c99

test-dll : integer.o dll.o test-dll.o
	gcc $(LOPTS) -o test-dll integer.o dll.o test-dll.o -std=c99

dll.o : dll.c dll.h
	gcc $(OOPTS) dll.c -std=c99

test-dll.o : test-dll.c integer.h dll.h
	gcc $(OOPTS) test-dll.c -std=c99

test-stack : integer.o dll.o stack.o test-stack.o
	gcc $(LOPTS) -o test-stack integer.o dll.o stack.o test-stack.o -std=c99

stack.o : stack.c stack.h dll.h dll.c
	gcc $(OOPTS) stack.c -std=c99

test-stack.o : test-stack.c integer.h dll.h stack.h
	gcc $(OOPTS) test-stack.c -std=c99

test-queue : integer.o dll.o queue.o test-queue.o
	gcc $(LOPTS) -o test-queue integer.o sll.o queue.o test-queue.o -std=c99

queue.o : queue.c queue.h sll.h sll.c
	gcc $(OOPTS) queue.c -std=c99

test-queue.o : test-queue.c integer.h sll.h queue.h
	gcc $(OOPTS) test-queue.c -std=c99

integer.o : integer.c integer.h
	gcc $(OOPTS) integer.c -std=c99

test : test-sll test-dll test-stack test-queue
	./test-sll
	# ./test-dll
	# ./test-stack
	# ./test-queue

clean   :
	rm -f integer.o sll.o test-sll.o test-sll dll.o test-dll.o test-dll stack.o test-stack.o test-stack queue.o test-queue.o test-queue
