#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    char b[100];
    scanf("%s",&b);
    int n=strlen(a);
    int x=1;
    int y=0;
    int m=0;
    for(int s=0;s<n;s++){
        x=1;
        if(a[s]==b[0]){
            for(int k=1;k<strlen(b);k++){
                if(a[s+k]==b[k]){
                    x++;
                    m++;
                }
            }
        }
        if(x==strlen(b) && m>0){
            y++;
            printf("Yes");
            break;
        }
    }
    if(y==0){
        printf("No");
    }

return 0;
}