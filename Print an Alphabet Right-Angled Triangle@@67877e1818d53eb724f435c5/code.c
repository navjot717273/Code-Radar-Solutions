#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    char c=a;
    for(int i=0;i<a;i++){
        for(char j='A';j<=c;j++){
            printf(" %c",j);
        }
        printf("\n");
    }
    return 0;
}