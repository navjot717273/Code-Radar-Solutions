#include <stdio.h>

int main() {
    int a;
    int j=0;
    scanf("%d",&a);
    for(int s=1;s<=a;s++)
    {
        for(int n=0;n<s;s++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}