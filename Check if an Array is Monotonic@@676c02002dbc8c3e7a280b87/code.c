#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int q=0;
    int w=0;
    for(int s=0;s<n-1;s++){
        if(a[s]>=a[s+1]){
            q++;
        }
        else if(a[s]<=a[s+1]){
            w++;
        }
    }
    if(q==n-1 || w==n-1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}