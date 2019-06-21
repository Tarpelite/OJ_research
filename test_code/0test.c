
long long pailie(int a,int b)
{
 int i;
 long long int sum=1;

b=a-b;

 sum*=i;

 for(i=1;i<=a-b;i++)
 sum/=i; 

return sum;
}





int main() {
	int m,n;
	long long result;
	scanf("%d %d",&m,&n);
	
	
	result = pailie(m,n);
	printf("%lld",result);

	
	
	
	return 0;
}
