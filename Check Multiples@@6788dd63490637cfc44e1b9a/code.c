#include <stdio.h>


int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a%b==0)
    {
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}