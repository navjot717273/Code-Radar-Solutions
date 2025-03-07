int fibonacciSeries(int x){
int a=0;
int b=1;
int c=a+b;
printf("0");
for(int s=1;s<x;s++){
    printf("%d ",c);
    a=b;
    b=c;
    c=a+b;
}
}