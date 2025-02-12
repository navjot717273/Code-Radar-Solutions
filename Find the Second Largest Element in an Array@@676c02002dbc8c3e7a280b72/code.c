#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int x=0;
    for(int s=0;s<n;s++){
        for(int k=1;k<n;k++){
            if(a[k-1]<a[k]){
                int t=a[k-1];
                a[k-1]=a[k];
                a[k]=t;
                x++;
            }
            else if(a[k-1]>a[k]){
                x++;
            }
        }
    }
    if(x==0){
        printf("-1");
    }
    else if(n==1){
        printf("-1");
    }
    else{
        printf("%d",a[1]);
    }
    return 0;
}
