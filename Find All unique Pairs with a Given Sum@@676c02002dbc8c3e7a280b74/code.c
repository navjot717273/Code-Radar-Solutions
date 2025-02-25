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
    int q=0;
    for(int s=0;s<n;s++){
        for(int j=s+1;j<n;j++){
            if(s==j){
                continue;
            }
            else if(q>0){
                continue;
            }
            else if(a[s]==a[j]){
                printf("%d %d\n",a[s],a[j]);
                q++;
                break;
            }
            else{
                if((a[s]+a[j])==k){
                    printf("%d %d\n",a[s],a[j]);
                }
            }
        }
    }
    return 0;
}