#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    int max=0;
    for(int s=0;s<n;s++){
        if(a[s]>max){
            max=a[s];
        }
    }
    b[0]=max;
    b[n-1]=-1;
    for(int s=1;s<n-1;s++){
        b[s]=a[n-1];
    }
    for(int s=0;s<n;s++){
        printf("%d ",b[s]);
    }
    return 0;
}