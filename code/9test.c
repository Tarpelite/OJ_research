
int main()
{
    int num,K,a[20000]={0},i,N=0,M=1,H,l,r;
    scanf("%d%d",&num,&K);
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    while(K--)
{
    N=0,M=1;
    scanf("%d%d",&l,&r);
    for(i=l;i<=r;i++)
    {
        N+=a[i]%num;
        N%=num;
        M*=a[i]%num;
        M%=num;
    }
    l=min(N,M),r=max(N,M);
    H=a[l];
    for(i=l+1;i<=r;i++)
      H=H^a[i];
    printf("%d\n",H);
    }
    
    return 0;
}
