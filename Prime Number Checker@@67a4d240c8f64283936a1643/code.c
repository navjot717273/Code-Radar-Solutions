#include <stdio.h>
isPrime(int num){
    int k=0;
    for(int s=1;s<=num;s++){
        if(num%s==0){
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
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}