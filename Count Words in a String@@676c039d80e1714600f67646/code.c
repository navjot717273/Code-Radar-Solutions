#include <stdio.h>
#include <string.h>
int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    
    int n=strlen(a);
    int k=0;
    for(int s=1;s<n;s++){
        if(a[s-1]!=' ' && a[s]==' ' && a[s+1]!=' '){
            k++;
        }
    }
    if(k!=0){
        if(a[0]!=' '){
            k++;
        }
    }
    printf("%d",k);
return 0;
}