#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int k;
    int x=-1;
    scanf("%d",&k);
    for(int s=0;s<n;s++){
        if(k==a[s]){
            x=s;
            break;
        }
    }
    if(x==-1){
        printf("-1");
    }
    else{
        printf("%d",x);
    }
    return 0;
}