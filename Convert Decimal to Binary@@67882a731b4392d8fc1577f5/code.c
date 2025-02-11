#include <stdio.h>
int main() {
    int a;
    char b[50];
    scanf("%d",&a);
    while(a>0){
        if(a%2==0){
            b=b+'0';
        }
        else{
            b=b+'1';
        }

        a=a/2;
    }
    printf("%s",b);
    return 0;

}