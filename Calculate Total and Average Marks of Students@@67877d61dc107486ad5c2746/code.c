#include <stdio.h>
struct Student{
    int roll;
    char name[99];
    float marks;    
};
int main() {
    int n;
    scanf("%d",&n);
    struct Student students[n];
    float m=0;
    for(int i =0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
        m=m+students[i].marks;
    }
    printf("Total Marks: %2f\nAverage Marks: %2f",m,m/n);
    
}
