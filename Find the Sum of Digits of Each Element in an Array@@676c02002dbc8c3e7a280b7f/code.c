#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    for(int s=0;s<n;s++){
        int z=a[s];
        int q;
        while(z>0){
            q=q+z%10;
            z=z/10;
        }
        b[s]=q;
    }
    for(int s=0;s<n;s++){
        printf("%d ",b[s]);
    }
    return 0;
}