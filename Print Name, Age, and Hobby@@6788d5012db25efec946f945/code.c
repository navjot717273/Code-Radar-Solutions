#include <stdio.h>



int main() {
    char a[99];
    int b;
    char c[99];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);

    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}