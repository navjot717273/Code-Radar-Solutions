#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int s=1;s<=a;s++)
    {
        int k=0;
        for(int i=1;i<=(a-s);i++)
        {
            printf(" "); 
        }
        while(k!=2*s-1){
            printf("*");
            k++;
        }
        printf("\n");
    }
    return 0;
}