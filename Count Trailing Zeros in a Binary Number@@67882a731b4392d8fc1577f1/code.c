#include <stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
    int num, count, i;

   
    scanf("%d", &num);

    count = 0;

   
    for(i=0; i<INT_SIZE; i++)
    {
       
        if((num >> i ) & 1)
        {
         
            break;
        }

        
        count++;
    }

    printf("%d", count);

    return 0;
}