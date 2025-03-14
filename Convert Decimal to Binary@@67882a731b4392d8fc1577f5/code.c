#include <stdio.h>
int main() {
    int a;
    char b[50];
    int k=0;
    scanf("%d",&a);
    while(a>0){
        if(a%2==0){
            b[k]='0';
            k++;
        }
        else{
            b[k]='1';
            k++;
        }

        a=a/2;
    }
    char c[k];
    int m=0;
    for(int s=k-1;s> -1;s--){
        c[m]=b[s];
        m++;
    }
    printf("%s",c);
    return 0;

}