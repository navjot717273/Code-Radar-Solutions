#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int k;
    scanf("%d",&k);
    for(int s=0;s<n;s++){
        for(int j=0;j<n;j++){
            if(s==j){
                continue;
            }
            else{
                if(a[s]+a[j]==k){
                    printf("%d %d\n",a[s],a[k]);
                }
            }
        }
    }
    return 0;
}