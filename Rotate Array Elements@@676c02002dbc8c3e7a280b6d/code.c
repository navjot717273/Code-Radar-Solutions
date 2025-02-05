#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b[];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c;
    scanf("%d",&c);
    for(int i=0;i<a;i++){
        printf("%d",a[i]);
    }

    return 0;
}