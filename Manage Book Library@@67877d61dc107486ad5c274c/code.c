#include <stdio.h>
struct book{
    char title[100];
    char author[100];
    int price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct book books[n];
    for(int s=0;s<n;s++){
        scanf("%s %s %d",&books[s].title,&books[s].author,&books[s].price);
    }
    int k;
    scanf("%d",&k);
    for(int s=0;s<n;s++){
        if(books[s].price>k){
            printf("Books above price %d:\n Title: %s, Author: %s, Price: %d",k,books[s].title,books[s].author,books[s].price);
        }
    }
}