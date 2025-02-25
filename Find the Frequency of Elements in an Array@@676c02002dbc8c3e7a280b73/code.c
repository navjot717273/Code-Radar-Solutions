#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    b[0]=a[0];
    for(int s=0;s<n;s++){
        for(int j=0;j<sizeof(b);j++){
            if(a[s]==b[j]){
                continue;
            }
            else{
                b[j+1]=a[s];
            }
        }
    }
    for(int s=0;s<sizeof(b);s++){
        printf("%d ",b[s]);
    }

    return 0;
}