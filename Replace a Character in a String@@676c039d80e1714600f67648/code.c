#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    char b;
    char c;
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    scanf("%c",&b);
    scanf("%c",&c);
    for(int s=0;s<n;s++){
        if(a[s]==b){
            a[s]=c;
        }
    }
    printf("%s",a);
return 0;
}