#include <stdio.h>
#include "merge_sort.h"

int main() {
    int i;
    int arr[] = {88,98,33,21,11,15,16,22,23,102,65,786} ;
    int size = sizeof(arr)/sizeof(int);
    /*printf("Original array\n");
    for (i = 0 ; i <= 6 ;i++)
        printf("%d " ,arr[i] );*/
    merge_sort(arr , 0 , size-1);
    printf("\nSorted array\n");
    for (i = 0 ; i <= size-1 ;i++) 
        printf("%d " ,arr[i] );
    printf("\n");
    return 0;
}
