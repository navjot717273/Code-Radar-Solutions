void compressString(char str[],char compressed[]){
    int o=0;
    for(int s=0;str[s]!='\0';s++){
        int k=0;
        int t=0;
        for(int j=0;str[j]!='\0';j++){
            if(a==j){
                continue;
            }
            else if(str[s]==str[j]){
                k++;
            }
        }
        for(int m=0;m<s;m++){
            t++;
        }
        if(t==0){
            compressed[o]=str[s];
            o++;
            if(k!=0){
            compressed[o]=k+1;
            o++;
            }
        }
    }
}