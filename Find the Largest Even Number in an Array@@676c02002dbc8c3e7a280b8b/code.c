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
    int z=0;
    if(a[0]>=0){
    for(int s=0;s<n;s++){
        if(a[s]%2==0){
            z=a[s];
            break;
        }
    }
    }
    else{
        for(int s=n-1;s> -1;s--){
            if(a[s]%2==0){
            z=a[s];
            break;
        }
        }
    }
    if(z>0){
        printf("%d",z);
    }
    else{
        printf("-1");
    }


    return 0;
}