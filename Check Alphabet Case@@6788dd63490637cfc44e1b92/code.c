#include <stdio.h>


int main() {
    char a;
    scanf("%c",&a);
    for(char c='A';c<='Z';c++)
    {
        if(a==c)
        {
            printf("Uppercase");
        }
        
    }
    for(char d='a';d<='z';d++)
    {
        if(a==d)
        {
            printf("Lowercase");
        }
    }
    return 0;
}