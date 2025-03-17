#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    char b[100];
    scanf("%s",&b);
    int n=strlen(a);
    printf("%d",n);

return 0;
}