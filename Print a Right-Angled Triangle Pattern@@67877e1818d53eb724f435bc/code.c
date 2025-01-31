#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int s=1;s<=a;s++)
    {
        for(int n=0;n<s;n++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}