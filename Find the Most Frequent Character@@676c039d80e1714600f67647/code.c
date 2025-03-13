#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int max=0;
    char c=a[0];
    for(int s=0;s<n;s++){
        int k=0;
        for(int j=0;j<n;j++){
            if(s==j){
                continue;
            }
            else if(a[s]==a[j] && a[s]!=' '){
                k++;
            }
        }
        if(k>max){
            max=k;
            c=a[s];
        }
    }
    printf("%s",c);
return 0;
}