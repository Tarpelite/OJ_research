long long t[100005]={0};
int main()
{
    long long n,x,m,j=0,l=100000,p;
    scanf("%lld",&n);
    for(x=1;x<=n;x++){
        scanf("%lld",&p);t[p]++;}
    scanf("%lld",&m);
        for(l=100000;l>=1;l--)
        {
            if(t[l]>0) j++;
            if(j==m) {printf("%lld %lld",l,t[l]);break;}
        }
    return 0;
}
