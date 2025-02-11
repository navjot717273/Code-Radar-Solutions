#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    for(int s=0;s<n;s++){
        for(int k=1;k<n;k++){
            if(a[s]<a[k]){
                int t=a[s];
                a[s]=a[k];
                a[k]=t;
            }
        }
    }
    printf("%d",a[1]);
    return 0;
}
