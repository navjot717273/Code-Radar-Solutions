#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    for(int s=0;s<n;s++){
        if(islower(a[s])){
            a[s]=toupper(a[s]);
        }
    }
    printf("%s",a);
    return 0;
}