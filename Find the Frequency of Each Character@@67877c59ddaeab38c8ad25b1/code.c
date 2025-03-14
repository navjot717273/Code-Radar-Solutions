#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    for(int s=0;s<n;s++){
        int x=0;
        int k=0;
        for(int j=0;j<n;j++){
            if(a[s]==a[j]){
                x++;
            }
        }
        for(int y=0;y<s;y++){
            if(a[s]==a[y]){
                k++;
            }
        }
        if(k==0){
        printf("%c: %d\n",a[s],x);}
    }

    return 0;
}