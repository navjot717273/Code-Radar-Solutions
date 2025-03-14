#include <stdio.h>

void decimalToBinary(int n) {
    // Variable to store binary digits
    int binary[32];
    int index = 0;

    // Special case for 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    // Print the binary digits in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;

    // Get user input
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Convert to binary
    printf("Binary representation: ");
    decimalToBinary(num);

    return 0;
}
