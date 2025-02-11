#include <stdio.h>

int main() {
    int i,j;
    printf("Pls enter the bit number that you want to toggle\n");
    scanf("%d %d",&i,&j);
    i^=1<<j;
    printf("%d",i);
    return 0;
}