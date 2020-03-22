#define NOT_FOUND -1

int binary_search_util(int *arr , int to_search , int start , int end) {
    if (start==end) {
        if(arr[start] == to_search)
            return start;
        else 
            return NOT_FOUND;
    }
    int mid = start + (end - start)/2;
    if(arr[mid] == to_search) {
        return mid;
    }
    if(arr[mid] > to_search) {
        int left = binary_search_util(arr , to_search , start , mid);
        return left;
    } else {
        int right = binary_search_util(arr , to_search , mid+1 , end);
        return right;
    }
}

int binary_search(int *arr , int to_search , int size) {
   return binary_search_util(arr , to_search , 0 , size-1);
}
