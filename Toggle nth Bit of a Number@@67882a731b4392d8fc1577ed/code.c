#include <stdio.h>

int main() {
    int i,j;
    scanf("%d %d",&i,&j);
    i^=1<<j;
    printf("%d",i);
    return 0;
}