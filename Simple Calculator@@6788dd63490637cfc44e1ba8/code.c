#include <stdio.h>

int main() {
    int a;
    int b;
    char c[99];
    int d;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+')
    {
        d=a+b;
        printf("%d",d);
    }
    else if(c=='-')
    {
        d=a-b;
        printf("%d",d);
    }
    else if(c=='*')
    {
        d=a*b;
        printf("%d",d);
    }
    else if(c=='/')
    {
        d=a/b;
        printf("%d",d);
    }
    return 0;
}