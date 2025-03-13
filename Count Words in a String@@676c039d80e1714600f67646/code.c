#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%s",&a);
    int n=strlen(a);
    int k=0;
    for(int s=0;s<n;s++){
        if(a[s]=='a'){
            k++;
        }
    }
    printf("%d",k);
return 0;
}