#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int p=0;
    for(int s=0;s<n;s++){
        int q=0;
        for(int k=1;k<=a[s];k++){
            if(a[s]%k==0){
                q++;
            }
        }
        if(q==2){
            p++;
        }
    }
    printf("%d",p);
    return 0;
}