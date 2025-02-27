#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    for(int s=0;s<n;s++){
        int x=0;
        for(int j=s;j<n;j++){
            if(a[s]==a[j]){
                x++;
            }
        }
        if(x>0){
        printf("%d %d\n",a[s],x);}
    }

    return 0;
}