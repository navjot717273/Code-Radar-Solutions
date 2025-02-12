#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int z=0;
    int x[n];
    for(int s=0;s<n;s++){
        for(int k=0;k<n;k++){
            if(s==k){
                continue;
            }
            else{
                if(a[s]==a[k]){
                    
                    x[z]=a[s];
                    z++;
                    break;
                }
            }
        }
    }
    if(z==0){
        printf("-1");
    }
    else{
        printf("%d",x[0]);
    }
    return 0;
}