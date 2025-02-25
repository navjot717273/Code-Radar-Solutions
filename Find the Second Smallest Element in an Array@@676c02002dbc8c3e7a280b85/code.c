#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int z=a[0];
    int k=0;
    int v=0;
    for(int s=0;s<n;s++){
        if(z<=a[s]){
            k++;
            if(k==1){
                v=a[s];
            }
        }
    }
    printf("%d",v);
    return 0;
}