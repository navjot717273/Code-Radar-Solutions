#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    for(int s=0;s<n-1;s++){
        int max=0;
        for(int j=s+1;j<n;j++){
            if(a[j]>max){
                max=a[j];
            }
        }
        b[s]=max;
    }
    b[n-1]=-1;
    for(int s=0;s<n;s++){
        printf("%d ",b[s]);
    }
    return 0;
}