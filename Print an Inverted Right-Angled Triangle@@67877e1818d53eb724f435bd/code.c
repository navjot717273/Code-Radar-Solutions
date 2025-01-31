#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int d=0;d<a;d++)
    {
        for(int s=d;s<a;s++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}