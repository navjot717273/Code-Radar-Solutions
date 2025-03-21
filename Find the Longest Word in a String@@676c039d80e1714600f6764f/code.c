#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    char b[n];
    int k=0;
    int max=0;
    for(int s=0;s<=n;s++){
        if(a[s]==' ' || a[s]=='\0'){
            if(k>max){
                max=k;
            }
            
            k=0;
        }
        else{
            b[k]=a[s];
            k++;
        }
    }
    printf("%d",max);

return 0;
}