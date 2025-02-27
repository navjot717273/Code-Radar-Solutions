#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int min=a[0];
    int k=0;
    int y=0;
    for(int s=0;s<2;s++){
        for(int j=0;j<n;j++){
            if(min>a[j]){
                min=a[j];
                k=j;
                y=1;
            }
        }
        if(s==0 && y!=1){
            a[k]=10000;
            min=10000;
        }
    }
    if(k==0){
        printf("-1");
    }
    else{
        printf("%d",min);
    }

    return 0;
}