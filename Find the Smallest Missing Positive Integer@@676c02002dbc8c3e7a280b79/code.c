#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int k=1;
    for(int s=0;s<n;s++){
        for(int j=0;j<n;j++){
            if(a[s]==k){
            k++;
        }
        }
    }
    
    printf("%d",k);
    return 0;
}