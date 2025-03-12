#include <stdio.h>
int binarySearch(int a[],int n,int t){
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(a[mid]==t){
            return mid;
            
        }
        else if(a[mid]>t){
            high=mid-1;
        }
        else if(a[mid]<t){
            low=mid+1;
        }
        return -1;
    }

}