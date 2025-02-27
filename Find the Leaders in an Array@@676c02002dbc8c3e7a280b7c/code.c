#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int q=0;
    for(int s=0;s<n-1;s++){
        int x=0;
        for(int j=s+1;j<n;j++){
            if(a[s]>=!a[j]){
                x++;
            }
        }
        if(x==0){
            int b[q]=a[s];
            q++;
        }
    }
    b[q+1]=a[n-1];
    for(int s=0;s<sizeof(b);s++){
        printf("%d ",b[s]);
    }
    return 0;
}