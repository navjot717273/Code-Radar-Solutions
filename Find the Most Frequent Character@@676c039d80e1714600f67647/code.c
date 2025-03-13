#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int max=0;
    char c;
    for(int s=0;s<n;s++){
        int k=0;
        for(int j=0;j<n;j++){
            if(a[s]==' '){
                continue;
            }
            else if(a[s]==a[j]){
                k++;
            }
        }
        if(k>max){
            max=k;
            c=a[s];
        }
        else if(k==max){
            if(c>a[s]){
                c=a[s];
            }
        }
    }
    printf("%c",c);
return 0;
}