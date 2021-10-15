all: struct.o
	gcc -o struct struct.o
	
struct.o: struct.c
	gcc -c struct.c
	
run:
	./struct

clean:
	rm *.o
	