#include <stdio.h>

int main() {
    char a;
    char s[]="Special Character";
    scanf("%c",&a);
    for(char b='a';b<='z';b++)
    {
        if(a==b)
        {
            s="Consonant";
        }
    }
    if(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u')
    {
        s="Vowel";
    }
    else if(a=='0' || a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9')
    {
        s="Digit";
    }
    printf("%s",s);
    return 0;
}