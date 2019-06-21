long long time1(int x);

int main()
{
	int m,n,o;
	long long c;
	scanf("%d%d",&m,&n);
	o=m-n;
	c=time1(m)/(time1(n)*time1(o));
	printf("%d",c);
	return 0;
}
long long time1(int x)
{
	int i=x;
	long long sum=1;
    while(i>0)
    {
        sum = sum*x;
        x--;
        i--;
    }
	return sum;
}

