bin_merge_sort: main.o merge_sort.o
	g++ main.o merge_sort.o -o bin_merge_sort

main.o: main.cpp
	g++ -c main.cpp

merge_sort.o: merge_sort.c merge_sort.h
	g++ -c merge_sort.c

clean:
	rm *.o bin_merge_sort
