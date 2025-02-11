#include <stdio.h>
 
int clearBit(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}
 
int main()
{
    int n = 5, k = 1;
 
    printf("%d", clearBit(n, k));
 
    return 0;
}