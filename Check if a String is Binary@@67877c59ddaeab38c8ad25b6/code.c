#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    scanf("%[^\n]%*c",&a);
    int n=strlen(a);
    int k=1;
    for(int s=0;s<n;s++){
        if!(a[s]>1){
            k=0;
            break;
        }
    }
    if(k==0){
        printf("No");
    }
    else{
        printf("Yes");
    }

return 0;
}