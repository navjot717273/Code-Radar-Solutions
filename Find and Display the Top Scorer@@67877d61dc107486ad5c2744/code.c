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
    int max=0;
    int x=0;
    for(int i =0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
        if(students[i].marks>max){
            max=students[i].marks;
            x=i;
        }
    }
        printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",students[x].roll,students[x].name,students[x].marks);
        
}