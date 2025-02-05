#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b=1;
    for(int i=1;i<=a;i++){
        for(int j=0;j<i;j++){
            printf(" %d",b);
            b++;
        }
        printf("\n");
    }

    return 0;
}