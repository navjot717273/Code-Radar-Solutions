int fibonacciSeries(int x){
int a=0;
int b=1;
int c=a+b;
for(int s=0;s<x;s++){
    printf("%d ",s);
    a=b;
    b=c;
    c=a+b;
}
}