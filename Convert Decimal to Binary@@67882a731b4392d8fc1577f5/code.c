#include<stdio.h>
#include <math.h>
void main() {
    int a,b=0;
    int n;
    scanf("%d",&n);
    int m=1;
    for(int i=0;n>0;i++) {
        a=n%2;
        n=n/2;
        for(int s=0;s<i-1;s++){
            m=m*10;
        }
        b=b+(m*a);
        m=1;
    }
    printf("%d",b);
}