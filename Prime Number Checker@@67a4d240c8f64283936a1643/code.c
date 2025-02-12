#include <stdio.h>
isPrime(int n){
    int k=0;
    for(int s=1;s<=n;s++){
        if(n%s==0){
            k++;
        }
    }
    if(k==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
        t--;
    }
    return 0;
}