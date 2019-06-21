int main(){
    int n,k,i,H,M,N,t=0,m=0;
    scanf("%d%d",&n,&k);
    int a[n],l,r,b[k];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(~scanf("%d%d",&l,&r)){
        N=0;
        M=1;
        for(i=l;i<=r;i++){
            N=(a[i]%n+N)%n;
            M=((a[i]%n)*M)%n;
        }
        if(N<=M){
            l=N;
            r=M;
        }
        else{
            l=M;
            r=N;
        }
        for(i=l;i<=r;i++){
            m=m^a[i];
        }
        b[t]=m;
        m=0;
        t=t+1;
    }
    for(i=0;i<k;i++){
        printf("%d\n",b[i]);
    }
}