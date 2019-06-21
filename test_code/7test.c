
int hs(int n,int m)
{
	if(n==m)
	return 1;
	if(n==1)
	return m;
	int i,j,k,l,sum=0;
	for(i=0;i<=m-n;i++)
	sum+=hs(n-1,m-1-i);
	return sum;
}
int main()
{
	int n,m,sum;
	scanf("%d%d",&m,&n);
	printf("%d\n",hs(n,m));
	return 0;
}
