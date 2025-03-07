int fibonacciSeries(int x){
int a=0;
int b=1;
int c=a+b;
printf("0 1 ");
for(int s=2;s<x;s++){
    printf("%d ",c);
    a=b;
    b=c;
    c=a+b;
}
}