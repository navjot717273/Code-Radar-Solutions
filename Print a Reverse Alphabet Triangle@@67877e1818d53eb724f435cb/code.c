#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b=a;
    for(int i=0;i<a;i++){
        char c='A';
        for(int j=0;j<b;j++){
            printf(" %c",c);
            c++;

        }
        printf("\n");
        b--;
    }
    return 0;
}