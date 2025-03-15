#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[50];
    float percentage;
};
int main(){
    int n;
    scanf("%d",&n);
    while(n>0){
        scanf("%d %s %f",n.rollno,&n.name,&n.percentage);
        n--;
    }
    while(n>0){
        printf("%d %s %f\n",n.rollno,n.name,n.percentage)
        n--;
    }
}