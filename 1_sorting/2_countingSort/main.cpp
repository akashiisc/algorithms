#include <stdio.h>
#include "counting_sort.h"

int main() {
    int i;
    int arr[] = {4,2,1,1,3,4,5,3,3,4,4,5,5,6,7,7,8,8,8,9,9,2,2,1,1,1,2,3,3,2,3,2,3,2,4,5,6,7,4,3,4,6,4,6,7,4,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    counting_sort(arr , 0 , size-1 , 0 , 9);
    printf("\nSorted array\n");
    for (i = 0 ; i <= size-1 ;i++)
        printf("%d " ,arr[i] );
    printf("\n");
    return 0;

}
