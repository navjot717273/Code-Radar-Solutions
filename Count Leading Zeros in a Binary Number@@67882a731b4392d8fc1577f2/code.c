#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, count, msb, i;
   
    scanf("%d", &num);

    
    msb = 1 << (INT_SIZE - 1);

    count = 0;

  
    for(i=0; i<INT_SIZE; i++)
    {
    
        if((num << i) & msb)
        {
           
            break;
        }

        count++;
    }

    printf("%d", count);

    return 0;
}