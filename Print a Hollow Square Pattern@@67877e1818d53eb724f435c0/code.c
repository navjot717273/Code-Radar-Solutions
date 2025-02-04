#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    char b[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            b[i][j]='*';
        }
    }
    for(int i=1;i<(a/2);i++)
    {
        for(int j=1;j<(a/2);j++)
        {
            b[i][j]=' ';
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%c",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}