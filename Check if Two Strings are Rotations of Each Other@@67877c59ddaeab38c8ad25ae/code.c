#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    int m=strlen(a);
    int n=strlen(b);
    if(m==n){
        int k=1;
        for(int s=0;s<m;s++){
            if(a[s]!=b[n-1]){
                k=0;
                break;
            }
            n--;
        }
        if(k==0){
            printf("No");
        }
        else{
            printf("Yes");
        }
    }
    else{
        printf("No");
    }
}