#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int start=0;
    for(int s=0;s<=n;s++){
        if(a[s]==' ' || a[s]=='\0'){
            int  end=s-1;
            while(start<end){
                int t=a[start];
                a[start]=a[end];
                a[end]=t;
                start++;
                end--;
            }
            start=s+1;
        }
    }
    printf("%s",a);
return 0;
}