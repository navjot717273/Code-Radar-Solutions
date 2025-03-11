#include <stdio.h>
int kthsmallnumber(int a[],int n,int b){

    printf("%d",a[b-1]);
}
int sortarray(int a[],int n,int b){
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
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b;
    scanf("%d",&b);
    sortarray(a[],n,b);
return 0;
}