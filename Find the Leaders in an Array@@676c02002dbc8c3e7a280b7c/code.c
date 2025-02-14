#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    int x=0;
    int z=0;
    for(int s=0;s<n-1;s++){
        z=0;
        for(int k=s+1;k<n;k++){
            if(a[s]>=a[k]){
                z++;   
            }
        }
        if(z==(k-s)){
            b[x]=a[s];
            x++;
        }
    }
    x=x+1;
    b[x]=a[n-1];
    for(int s=0;s<x;s++){
        printf("%d",b[s]);
    }
    return 0;
}