#include <stdio.h>
#include <string.h>

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
        else{
            b[k]=a[s];
            k++;
        }
    }
    int m=0;
    int x=0;
    for(int s=k-1;s>k/2;s--){
        if(b[s]!=b[m]){
            x=1;
            break;
        }
    }
    if(x==1){
        printf("No");
    }
    else{
        printf("Yes");
    }
return 0;
}