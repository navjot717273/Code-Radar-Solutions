#include<stdio.h>
#include<math.h>
void main() {
    int a,b=0;
    int n;
    printf("Enter a Decimal Number\n");
    scanf("%d",&n);
    for(int i=0;n>0;i++) {
        a=n%2;
        n=n/2;
        b=b+(pow(10,i)*a);
    }
    printf("%d",b);
}