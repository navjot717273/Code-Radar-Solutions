#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    char b;
    scanf("%[^\n]%*c",&a);
    scanf("%[^\n]%*c",&a);
    int m=strlen(a);
    int n=strlen(b);
    int k=0;
    for(int s=0;s<m;s++){
        for(int j=0;j<n;j++){
            if(a[s]==b[j]){
                k++;
            }
        }
    }
    if(k==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
return 0;
}