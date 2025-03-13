#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    scanf("%s",&a);
    int n=strlen(a);
    int k=1;
    for(int s=0;s<n;s++){
        if(a[s]==' '){
            k++;
        }
    }
    printf("%d",k);
return 0;
}