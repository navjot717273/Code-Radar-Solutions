#include <stdio.h>
struct day{
    char name[100];
    int number;
};
int main(){
    int n;
    scanf("%d",&n);
    struct day days[n];
    int k=0;
    for(int s=0;s<n;s++){
        scanf("%s %d",&days[s].name,&days[s].number);
        k=k+days[s].number;
    }
    printf("Average Temperature: %.2f",k/n);
}