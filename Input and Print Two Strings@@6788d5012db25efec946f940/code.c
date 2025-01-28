#include <stdio.h>



int main() {
    char a[99];
    char b[99];
    char c[99];
    scanf("%s",&a);
    for(int s=0;s<strlen(a);s++)
    {
        if( a[s]==' ')
        {
            c=c+b+" "+"and"+" ";
            b="";

        }
        else{b=b+a[s];

        }
    }
    print("You entered: %s",c);
    return 0;
}