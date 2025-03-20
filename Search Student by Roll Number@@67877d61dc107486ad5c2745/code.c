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
    for(int i =0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
    }
    int k;
    scanf("%d",&k);
    int m=0;
    for(int i =0;i<n;i++){
        if(students[i].roll==k){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i].roll,students[i].name,students[i].marks);
        m++;
    }
}
if(m==0){
    printf("Student not found");
}
}