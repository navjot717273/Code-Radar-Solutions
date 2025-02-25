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
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int k=0;
    int q=0;
    int w=0;
    for(int s=0;s<n;s++){
        for(int j=0;j<n;j++){
            if(s==j){
                continue;
            }
            else if(k==0){
                if((a[s]-a[j])==-1){
                    k++;
                    q=a[s];
                    w=a[j];
                }
            }
        }
    }
    if(k==0){
        printf("-1");
    }
    else{
        printf("%d %d",q,w);
    }
    return 0;
}