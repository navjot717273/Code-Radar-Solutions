#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int m=0;
    for(int s=0;s<n;s++){
        for(int k=0;k<n;k++){
            if(s==k){
                continue;
            }
            else{
                if(a[s]*a[k]>m){
                    m=a[s]*a[k];
                }
            }
        }
    }
    printf("%d",m);
return 0;
}