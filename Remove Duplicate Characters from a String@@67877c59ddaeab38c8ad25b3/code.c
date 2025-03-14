#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    char b[n];
    b[0]=a[0];
    int k=1;
    int x=0;
    for(int s=1;s<n;s++){
        for(int j=0;j<s;j++){
            if(a[s]==a[j]){
                x=1;
            }
        }
        if(x!=1){
            b[k]=a[s];
            k++;
        }
    }
    printf("%s",b);

return 0;
}