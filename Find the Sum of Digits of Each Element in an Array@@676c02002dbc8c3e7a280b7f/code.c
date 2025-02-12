#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    for(int s=0;s<n;s++){
        b[s]=0;
        while(a[s]>0){
            b[s]=b[s]+a[s]%10
            a[s]=a[s]/10;
        }
    }
    for(int s=0;s<n;s++){
        printf("%d ",b[s]);
    }
    return 0;
}