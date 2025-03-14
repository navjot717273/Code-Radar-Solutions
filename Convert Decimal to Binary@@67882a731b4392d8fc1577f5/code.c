#include <stdio.h>
int main() {
    int a;
    char b[50];
    int k=0;
    scanf("%d",&a);
    while(a>0){
        if(a%2==0){
            b[k]='0';
            k++
        }
        else{
            b[k]='1';
            k++
        }

        a=a/2;
    }
    printf("%s",b);
    return 0;

}