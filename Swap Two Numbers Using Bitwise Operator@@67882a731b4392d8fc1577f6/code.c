#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
    return 0;
}