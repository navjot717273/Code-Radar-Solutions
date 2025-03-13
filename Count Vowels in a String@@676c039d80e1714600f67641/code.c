#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    scanf("%s",&a);
    int n=strlen(a);
    int k=0;
    for(int s=0;s<n;s++){
        if(a[s]=='a' || a[s]=='e' || a[s]=='i' || a[s]=='o' || a[s]=='u' || 
        a[s]=='A' || a[s]=='E' || a[s]=='I' || a[s]=='O' || a[s]=='U'){
            k++;
        }
    }
    printf("%d",k);
return 0;
}