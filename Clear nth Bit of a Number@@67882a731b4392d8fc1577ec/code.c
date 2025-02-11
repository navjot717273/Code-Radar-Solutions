#include <stdio.h>
 
int clearBit(int n, int k)
{
    return (n & (~(1 << k)));
}
 
int main()
{
    int n;
    int k;
    scanf("%d %d",&n,&k);
 
    printf("%d",clearBit(n, k));
 
    return 0;
}