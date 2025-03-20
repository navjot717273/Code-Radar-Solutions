#include <stdio.h>
struct book{
    char title[100];
    char author[100];
    float price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct book books[n];
    for(int s=0;s<n;s++){
        scanf("%s %s %f",&books[s].title,&books[s].author,&books[s].price);
    }
    float k;
    scanf("%f",&k);
    printf("Books above price %.2f:\n",k);
    for(int s=0;s<n;s++){
        if(books[s].price>k){
            printf("Title: %s, Author: %s, Price: %.2f",books[s].title,books[s].author,books[s].price);
        }
    }
}