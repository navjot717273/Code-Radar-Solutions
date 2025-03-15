void insertionSort(int arr[],int n){
    int i,key,j=0;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}
void printf(int arr[],int n){
    for(int s=0;s<n;s++){
        printf("%d ",arr[s]);
    }
}
