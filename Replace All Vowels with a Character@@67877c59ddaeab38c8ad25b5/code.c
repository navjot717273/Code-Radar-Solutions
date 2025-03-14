#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    for(int s=0;s<n;s++){
        if(a[s]=='a' || a[s]=='e' || a[s]=='i' || a[s]=='o' || a[s]=='u'){
            a[s]='*';
        }
    }
    printf("%s",a);
return 0;
}