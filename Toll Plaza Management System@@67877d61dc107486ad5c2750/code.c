#include <stdio.h>
struct Student{
    char [100]roll;
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
        if(students[i].name=="Car"){
            car=car+students[i].marks;
        }
        else if(students[i].name=="Truck"){
            truck=truck+students[i].marks;
        }
        else if(students[i].name=="Bike"){
            bike=bike+students[i].marks;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car,truck,bike);
}