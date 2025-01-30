#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int max=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>max)
    {
        max=a;
    }
    else if(b>max)
    {
        max=b;
    }
    else if(c>max)
    {
        max=c;
    }
    printf("%d",max);
    return 0;
}