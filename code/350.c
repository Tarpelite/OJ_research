int main()
{
    int n, m;
    int sum=1;
    int i;
    scanf("%d %d", &m, &n);
    for(i=1;i<=n;i++)
        sum=sum*(m+1-i)/i;
    printf("%d",sum);

    return 0;
}