#include<stdio.h>
void quick_sort(long long int s[],int l,long long int r)
{
    if(l < r)
    {
        int i=l,j=r,x=s[l];
        while(i<j)
        {
            while(i<j && s[j]>=x)//从右到左找到第一个小于x的数  
                j--;
            if(i<j)
                s[i++]=s[j];
            
            while(i<j && s[i]<=x)//从左往右找到第一个大于x的数  
                i++;
            if(i<j)
                s[j--]=s[i]; 
            
        }
        
        s[i]=x;//i = j的时候，将x填入中间位置  
        quick_sort(s,l,i-1);//递归调用 
        quick_sort(s,i+1,r);        
    }
}
long long a[20000000]={0};
long long b[20000000]={0};
int main()
{
	int z;
	long long n;
	scanf("%lld",&n);
	long long i=0;
	long long d,j;
	while(i<=n-1)
	{
		scanf("%lld",&d);
		a[i]=d;
		i=i+1;
	}
	long long k;
	scanf("%lld",&k);
	quick_sort(a,0,n-1); 
	b[0]=a[0];
	d=1;
	i=0;
	while(d<=n-1)
	{
		if(a[d]>b[i])
		{
			b[i+1]=a[d];
			d=d+1;
			i=i+1;
		}
		if(a[d]==b[i])
		{
			d=d+1;
		}
	}
	printf("%lld ",b[i-k+1]);
	d=0;
	long long sum=0;
	while(d<=n-1)
	{
		if(a[d]==b[i-k+1])
		{
			sum=sum+1;
			d=d+1;
		}
		else
		{
			d=d+1;
		}
	}
	printf("%lld",sum);
	return 0;
}