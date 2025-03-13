#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    char b[]="";
    scanf("%s",&a);
    int n=strlen(a);
    for(int s=n-1;s> -1;s--){
        b=b+a[s];
    }
    printf("%s",b);
    return 0;
}