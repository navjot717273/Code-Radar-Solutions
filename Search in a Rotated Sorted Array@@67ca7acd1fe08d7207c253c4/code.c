#include <stdio.h>
int searchInRotatedArray(int a[],int n,int t){
    int k=0;
    for(int s=0;s<n;s++){
        if(a[s]==t){
            k++;
            return s;
            break;
        }
    }
    if(k==0){
        return -1;
    }
}