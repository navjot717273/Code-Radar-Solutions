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
    char x;
    for(int i =0;i<n;i++){
        if(students[i].marks>=85){
            x='A';
        }
        else if(students[i].marks>=70 && students[i].marks<=84){
            x='B';
        }
        else{
            x='C';
        }
        printf("Roll Number: %d, Name: %s, Grade: %c",students[i].roll,students[i].name,x);
        printf("\n");
}
}