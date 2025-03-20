#include <stdio.h>
struct Student{
    int a;
    int p;    
};
int main() {
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i =0;i<n;i++){
        scanf("%d %d",&students[i].a,&students[i].p);
    }
    for(int i =0;i<n;i++){
        printf("Rectangle %d: Area: %d, Perimeter: %d",i+1,students[i].a*students[i].p,2(students[i].a+students[i].p));
        printf("\n");
}
}