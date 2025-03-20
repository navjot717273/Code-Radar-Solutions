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
    float k=students[0].marks;
    int x=0;
    for(int s=0;s<n;s++){
        if(students[s].marks<k){
            k=students[s].marks;
            x=s;
        }
    }
   
    printf("Students with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",students[x].roll,students[x].name,students[x].marks);
       
}