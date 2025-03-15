void insertionSort(char arr[],int n){
    int i,j=0;
    char key;
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
void printArray(char arr[],int n){
    for(int s=0;s<n;s++){
        printf("%d ",arr[s]);
    }
}
