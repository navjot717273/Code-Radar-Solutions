#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    scanf("%s",&a);
    int n=strlen(a);
    for(int s=0;s<n/2;s++){
        int t=a[s];
        a[s]=a[n-s-1];
        a[n-s-1]=t;
    }
    printf("%s",a);
    return 0;
}