#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int m=strlen(a);
    int start=0;
    for(int s=0;s<=n;s++){
        if(a[s]==' ' || a[s]=='\0'){
            int  end=s;
            for(int j=start;j<end;j++){
                int t=a[j];
                a[j]=a[end];
                a[end]=t;
                end--;
            }
            start=s+1;
        }
    }
    printf("%s",a);
return 0;
}