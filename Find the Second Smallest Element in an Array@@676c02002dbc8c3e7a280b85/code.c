#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int z=0;
    int k=0;
    for(int s=0;s<n;s++){
        for(int k=0;k<n;k++){
            if(s==k){
                continue;
            }
            else{
                if(a[s]<a[k]){
                    z++;
                    if(z==1){
                        k=a[s];
                    }
                }
            }
        }
    }
    printf("%d",k);

    return 0;
}