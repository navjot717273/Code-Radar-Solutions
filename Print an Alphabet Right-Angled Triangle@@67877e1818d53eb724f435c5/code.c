#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(char j='A';j<=a;j++){
            printf(" %c",j);
        }
        printf("\n");
    }
    return 0;
}