
sample: sample.o definition.o
	gcc sample.o definition.o -o sample

sample.o: sample.c
	gcc -c sample.c

definition.o: definition.c include.h
	gcc -c definition.c

clean:
	rm -f *.o sample include
