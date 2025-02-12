#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int v=-1;
    int max=0;
    for(int s=0;s<n;s++){
        int z=0;
        for(int k=0;k<n;k++){
            if(a[s]==a[k]){
                z++;
            }
        }
        if(z>max){
            max=z;
            v=a[s];
        }
        
    }
    if(max!=0){
        printf("%d",v);
    }
    else{
        printf("-1");
    }
    return 0;
}