#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    scanf("%s",&a);
    int n=strlen(a);
    int k=0;
    for(int s=0;s<n;s++){
        if(a[s]!=a[n-s-1]){
            k=1;
            break;
        }
    }
    if(k==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
return 0;
}