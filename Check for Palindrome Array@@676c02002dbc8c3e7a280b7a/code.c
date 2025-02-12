#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int b[n];
    int q=0;
    for(int s=n-1;s> -1;s--){
        b[q]=a[s];
        q++;
    }
    q=0;
    for(int s=0;s<n;s++){
        if(a[s]==b[s]){
            q++;
        }
    }
    if(q==n){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}