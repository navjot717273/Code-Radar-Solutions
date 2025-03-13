#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    char b[50];
    scanf("%[^\n]%*c %[^\n]%*c",&a,&b);
    printf("%s%s",a,b);
    
return 0;
}