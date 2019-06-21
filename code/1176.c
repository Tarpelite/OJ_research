#include<stdio.h>
#define number 10000
int tensu[number];

int min(int x, int y)
{
	int minimum;
	minimum=x;
	
	if(x>y)
		minimum=y;
	
	return minimum;
	
}

int max(int x,int y)
{
	int maximum;
	maximum=x;
	if(x<y)
		maximum=y;
		
	return maximum;
}

int N(int a,int b,int n)
{
	int sum=0,i;
	for(i=a;i<=b;i++)
		sum=(sum+tensu[i])%n;
		
	return sum%n;
}

int M(int a,int b,int n)
{
	int sum=1,i;
	for(i=a;i<=b;i++)
		sum=(sum*tensu[i])%n;
		
	return sum%n;
}

int H(int a,int b)
{
	int i,sum=tensu[a];
	for(i=a+1;i<=b;i++)
		sum^=tensu[i];
	return sum;
}


int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	
	int i,x;
	i=0;
	while(i<n){
		scanf("%d",&x);
		tensu[i]=x;
		i++;
	}
	
	int r,l;
	int a[k];
	i=0;
	while(i<k){
		scanf("%d%d",&l,&r);
		a[i]=H(min(N(l,r,n),M(l,r,n)),max(N(l,r,n),M(l,r,n)));
		
		
		i++;
	}
	
	for(i=0;i<k;i++)  
		printf("%d\n",a[i]);
	
	return 0;
}