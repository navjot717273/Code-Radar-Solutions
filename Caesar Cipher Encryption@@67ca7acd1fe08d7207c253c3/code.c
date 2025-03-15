#include <stdio.h>
#include <string.h>
void caesarCipher(char message[],int shift,char encrypted[]){
    int n= strlen(message);
    int k=0;
    for(int s=0;s<n;s++){
        if(message[s]=='z'){
            encrypted[k]='a';
            k++;
        }
        else if(message[s]=='Z'){
            encrypted[k]='A';
            k++;
        }
        else if((message[s]>='a' && message[s]<'z') || (message[s]>='A' && message[s]<'Z')){
            encrypted[k]=message[s]+shift;
            k++;
        }
        else{
            encrypted[k]=message[s];
            k++;
        }
    }
}