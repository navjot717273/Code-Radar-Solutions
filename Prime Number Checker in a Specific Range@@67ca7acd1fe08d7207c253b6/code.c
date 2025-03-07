int printPrimesInRange(int a,int b){
    int z=0;
    for(int s=a+1;s<=b;s++){
        int k=1;
        for(int j=2;j<s;j++){
            if(s%j==0){
                k=0;
                break;
            }
        }
        if(k!=0){
            printf("%d ",s);
            z++;
        }
    }
    if(z==0){
        printf("No prime numbers");
    }
}