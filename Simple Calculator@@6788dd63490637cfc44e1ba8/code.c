#include <stdio.h>

int main() {
    int a;
    int b;
    char c;
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
    else{
        printf("error");
    }
    return 0;
}