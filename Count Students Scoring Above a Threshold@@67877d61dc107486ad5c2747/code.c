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
    float k;
    int x=0;
    scanf("%f",&k);
    for(int s=0;s<n;s++){
        if(students[s].marks>k){
            x++;
        }
    }
    printf("Count of students scoring above %.2f: %d",k,x);
}