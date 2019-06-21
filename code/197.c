int zh(int a)
{
    int i,m = (int)(sqrt(a)+1);
    if (a==2)
        return 1;
    for(i=2; i<m; i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    for(k=n+1; k<=200000; k++)
    {
        if(zh(k))
        {
            printf("%d",k);
            break;
        }

    }
    return 0;
}