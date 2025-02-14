#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    if(n%2==0){
        int x=(a[n/2]+a[(n/2)+1])/2;
        printf("%d",x);
    }
    else{
        int k=(n+1)/2;
        printf("%d",&a[k]);
    }

    return 0;
}