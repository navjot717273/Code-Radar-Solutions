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
    int z=0;
    for(int s=0;s<n;s++){
        if(a[s]!=0){
            b[q]=a[s];
            q++;
        }
        else{
            z++;
        }
    }
    if(z>0){
    for(int k=q;k<n;k++){
        b[k]=0;
    }
    }
    for(int s=0;s<n;s++){
        printf("%d ",b[s]);
    }
    return 0;
}