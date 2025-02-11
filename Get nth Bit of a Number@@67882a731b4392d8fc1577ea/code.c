#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if((a>>b)&1){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}