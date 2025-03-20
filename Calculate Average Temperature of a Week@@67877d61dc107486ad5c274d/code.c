#include <stdio.h>
struct day{
    char name[100];
    int number;
};
int main(){
    int n=7;
    struct day days[n];
    int k=0;
    for(int s=0;s<n;s++){
        scanf("%s %d",&days[s].name,&days[s].number);
        k=k+days[s].number;
    }
    printf("Average Temperature: %d",k);
}