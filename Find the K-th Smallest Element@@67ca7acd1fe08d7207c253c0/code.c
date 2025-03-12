#include <stdio.h>
int kthsmallnumber(int a[],int n,int b){

    return(a[b-1]);
}
int kthSmallest(int a[],int n,int b){
    for(int s=0;s<n;s++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    kthsmallnumber(a,n,b);
}
