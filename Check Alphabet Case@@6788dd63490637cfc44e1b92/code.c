#include <stdio.h>


int main() {
    char a;
    int b=0;
    int c=0;
    scanf("%c",&a);
    for(char c='A';c<='Z';c++)
    {
        if(a==c)
        {
            printf("Uppercase");
            b=b+1;
        }
        
    }
    for(char d='a';d<='z';d++)
    {
        if(a==d)
        {
            printf("Lowercase");
            c=c+1;
        }
    }
    if(b==0 || c==0){
        printf("Not an alphabet");
    }
    return 0;
}