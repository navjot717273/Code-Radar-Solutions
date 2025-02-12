#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int x;
    scanf("%d",&x);
    while(x>0){
        int q=n-2;
        for(int s=n-1;s>0;s--){
            int t=a[s];
            a[s]=a[q];
            a[q]=t;
            q--;
        }
        x--;
    }
    for(int s=0;s<n;s++){
        printf("%d\n",a[s]);
    }

    return 0;
}