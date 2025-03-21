#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int k=0;
    int x=0;
    for(int s=0;s<n;s++){
        if(a[s]=='0' || a[s]=='1'){
            k++;
            x++;
        }
    }
    if(k!=n && x!=0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    
    printf("%d",n);
return 0;
}