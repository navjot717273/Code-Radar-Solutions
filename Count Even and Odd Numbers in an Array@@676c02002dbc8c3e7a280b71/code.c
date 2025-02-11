#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int even=0;
    int odd=0;
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
        if(a[s]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}