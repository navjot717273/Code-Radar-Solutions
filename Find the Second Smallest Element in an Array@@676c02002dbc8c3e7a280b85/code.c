#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    for(int s=0;s<n;s++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int k=-1;
    for(int s=0;s<n;s++){
        for(int j=0;j<n;j++){
            if(s==j){
                continue;
            }
            else if(a[s]==a[j]){
                continue;
            }
            else{
                k=a[j];
            }
        }
    }
    printf("%d",k);
    return 0;
}