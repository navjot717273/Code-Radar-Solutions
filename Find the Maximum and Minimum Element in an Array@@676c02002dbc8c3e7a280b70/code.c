#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
    int max;
    int min=a[0];
    for(int s=0;s<n;s++){
        if(a[s]>max){
            max=a[s];
        }
        else if(a[s]<min){
            min=a[s];
        }
    }
    printf("%d %d",min,max);
    return 0;
}