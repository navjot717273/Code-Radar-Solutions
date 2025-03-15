void selectionSort(char arr[],int n){
    char temp[100];
    for(int s=0;s<n-1;s++){
        int min=s;
        for(int j=s+1;j<n;j++){
            if (strcmp(arr[j], arr[min]) < 0) {  
                min = j;
        }
        }
        if (min != s) {
            strcpy(temp, arr[s]);
            strcpy(arr[s], arr[min]);
            strcpy(arr[min], temp);
        }
    
}}
void printArray(char arr[],int n){
    for(int s=0;s<n;s++){
        printf("%s\n",arr[s]);
    }
}