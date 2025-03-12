int printPrimesInRange(int a,int b){
    int z=0;
    for(int s=a;s<=b;s++){
        if(s<=1){
            continue;
        }
        else{
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
        }}
    }
    if(z==0){
        printf("No prime numbers");
    }
}