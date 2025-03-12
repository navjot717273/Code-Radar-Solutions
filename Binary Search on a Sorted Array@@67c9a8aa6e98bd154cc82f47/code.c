#include <stdio.h>
int binarySearch(int a[],int n,int t){
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==t){
            return mid;
            break;
        }
        else if(t<a[mid]){
            high=mid-1;
        }
        else if(t>a[mid]){
            low=mid+1;
        }
        return -1;
    }

}