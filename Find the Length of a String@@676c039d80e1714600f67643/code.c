#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    printf("%d",n);
return 0;
}