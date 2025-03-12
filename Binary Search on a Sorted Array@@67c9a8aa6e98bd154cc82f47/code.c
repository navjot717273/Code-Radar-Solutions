#include <stdio.h>
int binarySearch(int a[],int n,int t){
    int low=0;
    int high=n-1;
    
    while(low<=high){
       int mid=low+ (high-low)/2;
        if(t==a[mid]){
            return mid;
        }
        if(t>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        return -1;
    }

}