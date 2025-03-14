#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    char b;
    char d;
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    scanf("%c",&b);
    getchar();
    scanf("%c",&d);
    for(int s=0;s<n;s++){
        if(a[s]==b){
            a[s] = d;
        }
    }
    printf("%s",a);
return 0;
}