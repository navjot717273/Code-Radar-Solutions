#include <stdio.h>
int binarySearch(int a[],int n,int t){
    int low=0;
    int high=n-1;
    
    while(low<=high){
       int mid=(low+high)/2;
        if(a[mid]==t){
            return mid;
        }
        else if(t>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        return -1;
    }

}