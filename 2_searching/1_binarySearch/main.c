#include <stdio.h>
#include "binary_search.h"

int test_cases[] = {88,127,46,1022,-12};
int test_cases_result[] = {13 , -1, -1, -1, -1};

int main() {
    int i;
    int arr[] = {1,2,3,4,5,6,7,8,10,12,23,45,67,88,123,124,126,223,334,556,776,778};
    int size = sizeof(arr)/sizeof(int);
    int test_cases_size = sizeof(test_cases)/sizeof(int);
    for(i=0;i<test_cases_size;i++) {
        int x = binary_search(arr , test_cases[i] , size);
        if(x==test_cases_result[i]) {
            printf("Test case %d : Passed\n" , i);
        } else {
            printf("Test case %d : Failed\n" , i);
        }
    }
    return 0;
}
