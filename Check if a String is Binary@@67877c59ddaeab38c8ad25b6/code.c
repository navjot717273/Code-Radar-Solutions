#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int k=0;
    if(n==0){
        printf("Yes");
    }
    else{
    for(int s=0;s<n;s++){
        if(a[s]=='0' || a[s]=='1'){
            k++;
        }
    }
    if(k==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    }
return 0;
}