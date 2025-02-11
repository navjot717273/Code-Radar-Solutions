#include <stdio.h>

int main() {
    int num, flippedNumber;
    scanf("%d", &num);

    flippedNumber = ~num;
    printf("%d", flippedNumber);
    return 0;
}