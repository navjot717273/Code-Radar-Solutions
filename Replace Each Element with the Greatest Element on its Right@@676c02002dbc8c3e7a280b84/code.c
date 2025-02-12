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
        b[s]=a[n-1];
    }
    b[n-1]=-1;
    for(int s=0;s<n;s++){
        for(int k=0;k<n-1;k++){
            if(a[k]<a[k+1]){
                int t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
    for(int s=1;s<n-2;s++){
        b[s]=a[0];
    }
    for(int s=0;s<n;s++){
        printf("%d ",a[s]);
    }
    return 0;
}