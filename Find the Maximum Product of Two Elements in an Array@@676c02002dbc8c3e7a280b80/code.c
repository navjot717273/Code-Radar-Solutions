#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int s=0;s<n;s++){
        scanf("%d",&a[s]);
    }
for(int s=0;s<n;s++){
        for(int k=1;k<n;k++){
            if(a[k-1]<a[k]){
                int t=a[k-1];
                a[k-1]=a[k];
                a[k]=t;
            }
        }
}
if(a[n-2]<0 || a[n-1]<0){
int z=a[n-2]*a[n-1];
printf("%d",z);
}
else{
    int z=a[0]*a[1];
printf("%d",z);
}
return 0;
}