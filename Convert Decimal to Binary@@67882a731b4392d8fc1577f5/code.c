#include<stdio.h>
#include<math.h>
void main() {
    int a,b=0;
    int n;
    printf("Enter a Decimal Number\n");
    scanf("%d",&n);
    while(n>0) {
        a=n%2;
        n=n/2;
        b=b+(pow(10,i)*a);
    }
    printf("%d",b);
}