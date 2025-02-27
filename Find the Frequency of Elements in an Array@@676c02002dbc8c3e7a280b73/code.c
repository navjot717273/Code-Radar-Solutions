#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    for(int s=0;s<n;s++){
        int x=1;
        for(int j=s+1;j<=n;j++){
            if(a[s]==a[j]){
                x++;
            }
        }
        if(x>1){
        printf("%d %d\n",a[s],x);}
    }

    return 0;
}