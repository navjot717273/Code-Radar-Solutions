#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int z=0;
    int max=0;
    int x=0
    for(int s=0;s<n;s++){
        if(a[s]%2==0){
            max=a[s];
            z++;
            if(a[s]> max){
                x=a[s];
            }
        }
    }
    if(z>0){
        printf("%d",x);
    }
    else{
        printf("-1");
    }


    return 0;
}