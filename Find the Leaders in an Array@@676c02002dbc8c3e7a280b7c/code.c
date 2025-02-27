#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    
    for(int s=0;s<n-1;s++){
        int x=0;
        for(int j=s+1;j<n;j++){
            if(!(a[s]>=a[j])){
                x++;
            }
        }
        if(x==0){
            printf("%d ",a[s]);
        }
    }
    printf("%d",a[n-1]);
    
    return 0;
}