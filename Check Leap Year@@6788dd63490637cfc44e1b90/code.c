#include <stdio.h>



int main() {
    int a;
    scanf("%d",&a);
    if(a%4==0)
    {if (a%100)
    {if (a%400)
    {
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
        
    }
    else{
        printf("Leap Year");
    }
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    } 
    return 0;
}