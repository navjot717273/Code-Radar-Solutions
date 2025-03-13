#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    char b[50];
    scanf("%s",&a);
    int n=strlen(a);
    int k=0;
    for(int s=n-1;s> -1;s--){
        b[k]=a[s];
        k++;
    }
    if(a==b){
        printf("Yes");
    }
    else{
        printf("No");
        printf("%s",b);
    }
return 0;
}