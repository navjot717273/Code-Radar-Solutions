void caesarCipher(char message[],int shift,char encrypted[]){
    
    int k=0;
    for(int s=0;message[s]!='\0';s++){
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