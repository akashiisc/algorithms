bin_counting_sort: main.o counting_sort.o
	g++ main.o counting_sort.o -o bin_counting_sort

main.o: main.cpp
	g++ -c main.cpp

counting_sort.o: counting_sort.c counting_sort.h
	g++ -c counting_sort.c

clean:
	rm *.o bin_counting_sort
