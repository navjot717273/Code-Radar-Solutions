#include <stdio.h>
int binarySearch(int a[],int n,int t){
    int low=0;
    int high=n-1;
    
    while(low<=high){
       int mid=low+ (high-low)/2;
        if(a[mid]==t){
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