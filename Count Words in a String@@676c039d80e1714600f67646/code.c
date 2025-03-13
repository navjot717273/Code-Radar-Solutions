#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%s",&a);
    int n=strlen(a);
    int k=1;
    for(int s=0;s<n;s++){
        printf("%c\n",a[s]);
    }
    
return 0;
}