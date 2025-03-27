int trackScores(int scores[],int n,int result[]){
    int m=0;
    int o=0;
    int x=scores[0];
    int y=scores[0];
    for(int s=1;s<n;s++){
        if(scores[s]>x){
            m++;
            x=scores[s];
        }
        if(scores[s]<y){
            o++;
            y=scores[s];
        }
    }
    result[0]=m;
    result[1]=o;
}