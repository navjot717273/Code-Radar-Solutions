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
    int x=1;
    for(int s=1;s<n;s++){
        int y=0;
        for(int j=0;j<s-1;j++){
            if(a[s]!=a[j]){
                y++;
            }
        }
        if(y==s){
            b[x]=a[s];
            x++;
        }
    }
    for(int s=0;s<sizeof(b);s++){
        printf("%d",b[s]);
    }

    return 0;
}