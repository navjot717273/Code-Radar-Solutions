#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int d=0;d<a;d++)
    {
        for(int s=0;s<d;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}