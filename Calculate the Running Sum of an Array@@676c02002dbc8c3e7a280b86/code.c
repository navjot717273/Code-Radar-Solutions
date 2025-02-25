#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    int k=0;
    for(int s=0;s<n;s++){
        k=k+a[s];
        b[s]=k;
    }
    for(int s=0;s<n;s++){
        printf("%d ",b[s]);
    }
    return 0;
}