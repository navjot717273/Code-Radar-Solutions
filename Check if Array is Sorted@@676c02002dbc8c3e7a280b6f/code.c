#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int k=0;
    for(int s=1;s<n;s++){
        if(a[s-1]>a[s]){
            k=k+1;
        }
    }
    if(k==n){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }

return 0;
}