#include <stdio.h>
#include <string.h>


int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int k=0;
    for(int s=0;s<n;s++){
        for(int j=s+1;j<n;j++){
            if(a[s]==a[j]){
                k=1;
            }
        }
        if(k==0){
            printf("%c",a[s]);
            k=0;
            break;
        }
    }
    if(k==1){
        printf("-");
    }

    return 0;
}