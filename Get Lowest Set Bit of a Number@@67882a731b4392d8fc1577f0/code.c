#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main() {
    int num, order, i;
    scanf("%d",&num);
    order = INT_SIZE - 1;
    for(i=0; i<INT_SIZE; i++)
    {
        if((num>>i) & 1)
        {
            order = i;
            break;
        }
    }
    printf("%d",order);
    return 0;
}