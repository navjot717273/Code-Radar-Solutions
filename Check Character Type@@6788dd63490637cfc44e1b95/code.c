#include <stdio.h>

int main() {
    char a;
    int q;
    scanf("%c",&a);
    for(char b='a';b<='z';b++)
    {
        if(a==b && a!='a' && a!='e' && a!='i' && a!='o' && a!='u' )
        {
            printf("Consonant");
            q=q+1;
        }
    }
    if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("Vowel");
        q=q+1;
    }
    else if(a=='0' || a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9')
    {
        printf("Digit");
        q=q+1;
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}