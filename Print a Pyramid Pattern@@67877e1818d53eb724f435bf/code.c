#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int b=a;
    for(int s=0;s<a;s++)
    {
        for(int i=0;i<a;i++)
        {
            if(i<b)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        b--;
    }
    return 0;
}