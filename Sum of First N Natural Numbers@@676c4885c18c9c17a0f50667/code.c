#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int s=0;
    for(int i=0;i<=a;i++){
        s=s+i;
    }
    printf("%d",s);
    return 0;
}