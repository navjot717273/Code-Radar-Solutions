#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        char c='A';
        for(int j=1;j<=a;j++){

            printf(" %c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}