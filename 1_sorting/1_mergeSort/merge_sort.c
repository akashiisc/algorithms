void merge(int *a , int start, int mid, int end) {
    int i,j,k;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int L[n1];
    int R[n2];

    for (i=0;i<n1;i++) {
        L[i] = a[start+i];
    }
    for (i=0;i<n2;i++) {
        R[i] = a[mid+1+i];
    }
    j = 0;
    k = 0;
    i = start;
    while( j < n1 && k < n2) {
        if(L[j] <= R[k]) {
            a[i++] = L[j++];
        } else {
            a[i++] = R[k++];
        }
    }

    while(j < n1) {
        a[i++] = L[j++];
    }
    while(k < n2) {
        a[i++] = R[k++];
    }
}

void merge_sort(int *a , int start, int end) {
    if (start == end)
        return;
    int mid = start + (end-start)/2;
    merge_sort(a , start , mid);
    merge_sort(a , mid+1 , end);
    merge(a , start, mid , end);
}

