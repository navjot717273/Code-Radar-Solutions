void bubbleSort(char arr[],int n){
    for(int s=0;s<n-1;s++){
        for(int j=0;j<n-s-1;j++){
            if(arr[j]>arr[j+1]){
                char t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    
}
void printArray(char arr[],int n){
    for(int s=0;s<n;s++){
        printf("%c ",arr[s]);
    }
}