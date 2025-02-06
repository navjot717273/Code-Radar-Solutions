#include <stdio.h>

int main() {
    int rows;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int k=1;k<=rows;k++)
        printf(" ");
        
        for(int j=1;j<=i;j++)
        printf("%d",j);
        
        for(int l=i-1;l>0;l--)
        printf("%d",l);
        
    printf("\n");
    }
    return 0;
}