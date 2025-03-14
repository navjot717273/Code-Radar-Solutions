#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    char b;
    scanf("%[^\n]%*c",&a);
    scanf("%c",&b);
    int n=strlen(a);
    int k=0;
    for(int s=0;s<n;s++){
        if(a[s]==b){
            k++;
        }
    }
    printf("%d",k);
return 0;
}