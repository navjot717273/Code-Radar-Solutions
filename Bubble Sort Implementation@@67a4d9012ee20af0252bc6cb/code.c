#include <stdio.h>

void bubbleSort(int arr[],int n){
    for(int s=0;s<n;s++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int s=0;s<n;s++){
        printf("%d ",arr[s]);
    }
}