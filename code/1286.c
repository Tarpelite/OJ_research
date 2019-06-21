#include<stdio.h>

long long int jiecheng(int n)
{
	int i;
	long long int sum=1;
	
	for(i=1;i<=n;i++){
		sum=sum*i;
	}

	return sum;
}


int main()
{
	
	int m,n,s,s1=1;
	long long int i,j,k;
    long long int jiecheng(int n);
	
	scanf("%d %d",&m,&n);
	
	i=jiecheng(n);
	j=jiecheng(m);
	k=jiecheng(m-n);
	//for(j=m;j>=m-n+1;j--)
	//	s1=s1*j;
	
	
	s=j/(i*k);
	//s=s1/i;
	
//	printf("i=%lld\n",i);
//	printf("%llf\n",j);
//	printf("%llf\n",k);*/
	
	printf("%d",s);
	
}