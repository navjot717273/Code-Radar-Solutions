#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int b=a;
    for(int s=0;s<((a*2)-1);s++)
    {
        for(int i=0;i<a;i++)
        {
            if(i<(b-1))
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