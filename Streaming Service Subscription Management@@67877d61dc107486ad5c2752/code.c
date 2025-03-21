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
    int c,t,b=0;
    for(int i =0;i<n;i++){
        scanf("%s %s %f",&students[i].roll,&students[i].name,&students[i].marks);
        if(students[i].name[0]=='B'){
            car=car+students[i].marks;
            c++;
        }
        else if(students[i].name[0]=='S'){
            truck=truck+students[i].marks;
            t++;
        }
        else if(students[i].name[0]=='P'){
            bike=bike+students[i].marks;
            b++;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",c,car,t,truck,b,bike);
}