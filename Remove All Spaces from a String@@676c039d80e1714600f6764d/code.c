#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    char b[n];
    int k=0;
    for(int s=1;s<n;s++){
        if(a[s]!=' '){
            b[k]=a[s];
            k++;
        }
    }
    printf("%s",b);
    return 0;
}