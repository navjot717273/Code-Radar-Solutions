char bubbleSort(char arr[],int n){
    for(int s=0;s<n-1;s++){
        for(int j=0;s<n-s-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
int printArray(char arr[],int n){
    for(int s=0;s<n;s++){
        printf("%c ",arr[s]);
    }
}