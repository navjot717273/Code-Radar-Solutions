#include <stdio.h>
int main() {
    int n;
    int b;
    scanf("%d %d",&n,&b);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int k=0;
    for(int s=0;s<n;s++){
        if(a[s]==b){
            k++;
        }
    }
    printf("%d",k);
    return 0;
}