#include <stdio.h>

void decimalToBinary(int n) {
    int size = sizeof(n) * 8;
    for (int i = size - 1; i >= 0; i--) {
    
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;

    scanf("%d", &num);
    decimalToBinary(num);

    return 0;
}
