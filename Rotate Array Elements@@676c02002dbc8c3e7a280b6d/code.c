#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c;
    scanf("%d",&c);
    while(c>0){
        int z=0;
        for(int i=a;i>0;i--){
            int t=b[a];
            b[a]=b[z];
            b[z]=t;
            z++;
        }
        c--;
    }
    for(int i=0;i<a;i++){
        int m=b[i];
        printf("%d\n",m);
    }

    return 0;
}