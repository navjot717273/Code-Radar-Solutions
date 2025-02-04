#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int k=0;
    for(int s=0;s<a;s++;k=0)
    {
        for(int i=0;i<a-s;++i)
        {printf(" ");
           
        }
        while(k!=2*i-1){
            printf("*");
            ++k;
        }
        printf("\n");
    }
    return 0;
}