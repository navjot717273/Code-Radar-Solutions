#include <stdio.h>

int main() {
    int a;
    int b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+')
    {
        int d=a+b;
        printf("%d",d);
    }
    else if(c=='*')
    {
        int d=a*b;
        printf("%d",d);
    }
    return 0;
}