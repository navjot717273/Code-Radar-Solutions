#include <stdio.h>

int main() {
    int num, n, newNum;
    scanf("%d", &num);

    scanf("%d", &n);

    
    newNum = (1 << n) | num;

    
    printf("%d" newNum);
    return 0;
}