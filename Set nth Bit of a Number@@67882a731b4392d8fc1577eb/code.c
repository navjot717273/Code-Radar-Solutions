#include <stdio.h>

int main() {
    int num, n, newNum;
    scanf("%d %d",&num,&n);
    newNum = (1 << n) | num;
    printf("%d",newNum);
    return 0;
}