
void counting_sort(int *a , int start, int end, int range_start, int range_end) {
    int range_size = range_end - range_start + 1;
    int bookkeeping[range_size];
    int i;
    for (i=0;i<range_size;i++) 
        bookkeeping[i] = 0;
    for (i=start ; i<=end ; i++) {
        bookkeeping[a[i]-range_start]++;
    }
    int k = 0;
    for (i=0;i<range_size;i++) {
        int curr_list_size = bookkeeping[i];
        int j = 0;
        while (j < curr_list_size) {
            a[k++] = i+range_start;
            j++;
        }
    }
}
