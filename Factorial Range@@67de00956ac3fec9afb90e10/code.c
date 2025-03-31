int factorialRange(int s,int e){
    int sum=0;
    for(int m=s;m<=e;m++){
        sum=0;
        if(m==0){
            printf("1");
            printf("\n");
        }
        else if(m==1){
            printf("1");
            printf("\n");
        }
        else{
            for(int n=1;n<=m;n++){
                sum=sum+n;
            }
            printf("%d",sum);
            printf("\n");
        }
    }
}