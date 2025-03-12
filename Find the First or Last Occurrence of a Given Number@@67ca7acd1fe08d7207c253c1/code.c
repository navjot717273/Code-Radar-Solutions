#include <stdio.h>
int findOccurrence(int a[],int n,int t,char m){
    int k=0;
    if(m=='F'){
        for(int s=0;s<n;s++){
            if(a[s]==t){
                k++;
                return s;
                break;
            }
        }
    }
    if(m=='L'){
        for(int s=n-1;s> -1;s--){
            if(a[s]==t){
                k++;
                return s;
                break;
            }
        }
    }
    if(k==0){
        return -1;
    }
}