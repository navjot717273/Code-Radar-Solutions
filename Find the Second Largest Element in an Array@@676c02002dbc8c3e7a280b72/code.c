#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    for(int s=0;s<n;s++){
        for(int k=0;k<n-1;k++){
            if(a[k]<a[k+1]){
                int t=a[s];
                a[s]=a[k];
                a[k]=t;
            }
        }
    }
    printf("%d",a[1]);
    return 0;
}
