int selectionSort(int arr[],int n){
    for(int s=0;s<n-1;s++){
        int min=s;
        for(int j=s+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int t=arr[s];
        arr[s]=arr[min];
        arr[min]=t;
    }
}
int printArray(int arr[],int n){
    for(int s=0;s<n;s++){
        printf("%d ",arr[s]);
    }
}