#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int x=-1;
    for(int s=0;s<n;s++){
        for(int k=0;k<n;k++){
            if(s==k){
                continue;
            }
            else{
                if(a[s]==a[k]){
                    x=a[s];
                    break;
                }
            }
        }
    }
    printf("%d",x);
    return 0;
}