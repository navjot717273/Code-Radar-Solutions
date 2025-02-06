#include <stdio.h>

int main() {
    int rows;
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int k=1;k<rows;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}