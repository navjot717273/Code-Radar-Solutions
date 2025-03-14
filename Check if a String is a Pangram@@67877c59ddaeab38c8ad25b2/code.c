#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int m=0;
    for(char s='a';s<'z';s++){
        int k=0;
        for(int j=0;j<n;j++){
            if(s==a[j]){
                k=1;
            }
        }
        if(k!=1){
            m=1;
            break;
        }
    }

    if(m==1){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}