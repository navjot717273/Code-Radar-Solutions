#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int y=0;
    for(int s=0;s<n;s++){
        int k=a[s];
        int m=0;
        while(a[s]>0){
            m=m*10 + a[s]%10;
            a[s]=a[s]/10;
        }
        if(k==m){
            y++;
        }
    }
    printf("%d",y);



    return 0;
}