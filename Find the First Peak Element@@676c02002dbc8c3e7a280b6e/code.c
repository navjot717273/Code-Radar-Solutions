#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int k=0;
    for(int s=0;s<n;s++){
        if(s==0){
            if(a[s]>a[s+1]){
                k=a[s];
                break;
            }
        }
        else if(s+1 ==n){
            if(a[s]>a[s-1]){
                k=a[s];
                break;
            }
        }
        else{
            if((a[s]>a[s+1])&&(a[s]>a[s-1])){
                k=a[s];
                break;
            }
        }
    }
    if(k>0){
        printf("%d",k);
    }
    else{
        printf("-1");
    }
    return 0;
}