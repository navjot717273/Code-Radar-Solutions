#include <stdio.h>
int isPrime(int n){
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
