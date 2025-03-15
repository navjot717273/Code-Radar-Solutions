void selectionSort(char arr[],int n){
    for(int s=0;s<n-1;s++){
        int min=s;
        for(int j=s+1;j<n;j++){
            if(arr[j][0]<arr[min][0]){
                min=j;
            }
        }
        char t=arr[s];
        arr[s]=arr[min];
        arr[min]=t;
    }
}
void printArray(char arr[],int n){
    for(int s=0;s<n;s++){
        printf("%s\n",arr[s]);
    }
}