#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b[];
    for(int i=0;i<a;i++){
        int k;
        scanf("%d",&k);
        a[i]=k;
    }
    int c;
    scanf("%d",&c);
    for(int i=0;i<a;i++){
        int m=a[i];
        printf("%d",m);
    }

    return 0;
}