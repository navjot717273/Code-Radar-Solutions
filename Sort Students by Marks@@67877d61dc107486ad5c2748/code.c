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
    for(int k=0;k<n;k++){
    for(int s=0;s<n-1;s++){
        if(students[s].marks<students[s+1].marks){
            int t=students[s].marks;
            students[s].marks=students[s+1].marks;
            students[s+1].marks=t;
        }
    }}
    for(int i =0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i].roll,students[i].name,students[i].marks);
        printf("\n");
}
}