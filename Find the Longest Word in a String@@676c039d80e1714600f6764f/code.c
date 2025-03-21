#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    char b[n];
    int k=0;
    int max=0;
    int start=0;
    int end=0;
    for(int s=0;s<=n;s++){
        if(a[s]==' ' || a[s]=='\0'){
            if(k>max){
                max=k;
                end=s;
                start=end-k;
            }
            
            k=0;
        }
        else{
            k++;
        }
    }
    char maxc[n];
    int l=0;
    for(int s=start;s<end;s++){
        maxc[l]=a[s];
        l++;
    }
    printf("%s",maxc);

return 0;
}