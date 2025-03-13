#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    a.trim();
    int n=strlen(a);
    int k=1;
    for(int s=0;s<n;s++){
        if(a[s]==' ' && a[s+1]!=' '){
            k++;
        }
    }
    printf("%d",k);
return 0;
}