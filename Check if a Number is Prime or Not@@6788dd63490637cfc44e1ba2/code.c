#include <stdio.h>


int main() {
    int a;
    int q;
    scanf("%d",&a);
    for(int s=1;s<=a;s++)
    {
        if(a%s==0)
        {
            q++;
        }
    }
    if(q==2)
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}