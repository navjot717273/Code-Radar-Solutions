int factorialRange(int s,int e){
    if(s<0 || e<0 || s>e){
        printf("Invalid range");
    }
    else{
    int sum=1;
    for(int m=s;m<=e;m++){
        sum=1;
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
                sum=sum*n;
            }
            printf("%d",sum);
            printf("\n");
        }
    }
}
}