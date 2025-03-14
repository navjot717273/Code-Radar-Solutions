#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int m=strlen(a);
    a=' '+a;
    printf("%s",a);
return 0;
}