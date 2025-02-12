
for(int s=0;s<n;s++){
        for(int k=1;k<n;k++){
            if(a[k-1]<a[k]){
                int t=a[k-1];
                a[k-1]=a[k];
                a[k]=t;
            }
        }
}