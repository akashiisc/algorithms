bin_binary_search: main.o binary_search.o
	gcc main.o binary_search.o -o bin_binary_search

main.o: main.c
	gcc -c main.c

binary_search.o: binary_search.c binary_search.h
	gcc -c binary_search.c

clean:
	rm *.o bin_binary_search
