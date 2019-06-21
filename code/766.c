int range[100003];
int main()
{
	long long n,k,i,count,finder=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&count);
		range[count]++;
	}
	scanf("%lld",&k);
	for(i=100000;i>=1;i--)
	{
		if(range[i]!=0){
			finder++;
			if(finder==k){
				printf("%lld %lld",i,range[i]);
				break;
			}
		}
	}
	
}