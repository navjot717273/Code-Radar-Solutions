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
    int x=0;
    for(int i =0;i<n;i++){
        scanf("%d %s %f",&students[i].roll,&students[i].name,&students[i].marks);
        if(students[i].marks>=50){
            x++;
        }
    }
    if(x==n){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
}
