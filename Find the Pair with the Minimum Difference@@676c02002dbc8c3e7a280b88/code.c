#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    for(int s=0;s<n;s++){
        for(int j=0;j<n;j++){
            if(s==j){
                continue;
            }
            else{
                if(a[s]-a[j]){
                    
                }
            }
        }
    }
    return 0;
}