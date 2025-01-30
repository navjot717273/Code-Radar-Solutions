#include <stdio.h>


int main() {
    char a;
    scanf("%c",&a);
    for(char c='A';c<'Z';c++)
    {
        if(a==c)
        {
            printf("Uppercase");
        }
        else{
            printf("Lowercase");
        }
    }
    return 0;
}