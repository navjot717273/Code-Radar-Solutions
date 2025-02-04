#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(i>=1 && i<=((a/2)+1) && j>=1 && j<=((a/2)+1))
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}