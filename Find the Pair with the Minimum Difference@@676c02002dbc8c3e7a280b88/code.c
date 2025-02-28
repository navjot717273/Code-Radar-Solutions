#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    for(int s=0;s<n;s++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int min=a[0]-a[1];
    int x=a[0];
    int y=a[1];
    if(n>1){
    for(int s=0;s<n;s++){
        for(int j=0;j<n;j++){
            if(s==j){
                continue;
            }
            else{if((a[s]-a[j])>0){
                if((a[s]-a[j])<=min){
                    min=a[s]-a[j];
                    x=a[s];
                    y=a[j];
                }
            }
            }
        }
    }
    printf("%d %d",y,x);
    return 0;}
    else{
        printf("-1");
    }
}