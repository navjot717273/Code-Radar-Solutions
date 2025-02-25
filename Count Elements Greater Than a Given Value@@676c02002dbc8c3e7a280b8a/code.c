#include <stdio.h>
int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int a[n];
    int z=0;
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
        if(a[s]>k){
            z++;
        }
    }
    printf("%d",z);

    return 0;
}