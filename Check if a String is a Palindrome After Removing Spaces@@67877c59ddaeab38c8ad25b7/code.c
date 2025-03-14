#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    char b[n];
    int k=0;
    for(int s=0;s<n;s++){
        if(a[s]==' '){
            continue;
        }
        else{ if(isupper(a[s])){
            a[s]=tolower(a[s]);
        }
        else{
            b[k]=a[s];
            k++;}
        }
    }
    int m=k-1;
    int x=0;
    for(int s=0;s<k;s++){
        if(b[s]!=b[m]){
            x=1;
            break;
        }
        m--;
    }
    if(x==1){
        printf("No");
    }
    else{
        printf("Yes");
    }
return 0;
}