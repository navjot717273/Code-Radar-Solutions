#include <stdio.h>
struct Student{
    char roll[100];
    char name[99];
    float marks;    
};
int main() {
    int n;
    scanf("%d",&n);
    struct Student students[n];
    float car,truck,bike=0;
    for(int i =0;i<n;i++){
        scanf("%s %s %f",&students[i].roll,&students[i].name,&students[i].marks);
        if(students[i].name[0]=='S'){
            car=car+students[i].marks;
        }
        else if(students[i].name[0]=='P'){
            truck=truck+students[i].marks;
        }
        else if(students[i].name[0]=='V'){
            bike=bike+students[i].marks;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",car,truck,bike);
}