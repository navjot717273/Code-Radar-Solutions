#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b=a;
    for(int i=0;i<a;i++){
        for(int j=1;j<=b;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        b--;
    }
    return 0;
}