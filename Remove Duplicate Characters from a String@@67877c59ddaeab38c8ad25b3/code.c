#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    char b[n];
    b[0]=a[0];
    int m=1;
    for(int s=1;s<n;s++){
        int k=0;
        for(int j=0;j<s;j++){
            if(a[s]==a[j]){
                k++;
            }
        }
        if(k==0){
            b[m]=a[s];
            m++;
        }
    }
    printf("%s",b);

return 0;
}