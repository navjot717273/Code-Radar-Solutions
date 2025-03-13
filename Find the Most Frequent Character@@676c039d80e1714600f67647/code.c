#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int max=0;
    char c[1];
    for(int s=0;s<n;s++){
        int k=0;
        for(int j=0;j<n;j++){
            if(a[s]==' '){
                continue;
            }
            else if(a[s]==a[j]){
                k++;
            }
        }
        if(k>max){
            max=k;
            c[0]=a[s];
        }
    }
    printf("%d",max);
return 0;
}