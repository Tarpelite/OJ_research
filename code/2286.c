#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int n,k,i,x,y,min,max,xx;
int a[200];
int l[200],r[200];
int niupple(int zuo,int you)
{
	int sum,ii,b;
	sum=0;
	for(ii=zuo;ii<=you;ii++)
	{
		b=a[ii]%n;
		sum=(sum+b)%n;
	}
	return sum;
}
int mountvoom (int zuoo,int youu)
{
	int summ,iii,bb;
	summ=1;
	for(iii=zuoo;iii<=youu;iii++)
	{
		bb=a[iii]%n;
		summ=(summ*bb)%n;
	}
	return summ;
}
int hugegun (int xiao,int da)
{
	int chu,j;
	chu=a[xiao];
	for(j=xiao+1;j<=da;j++)
	{
		chu=chu^a[j];
	}
	return chu;
}
int main()
{  
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	{
	  scanf("%d%d",&l[i],&r[i]);
    }
    for(i=0;i<k;i++)
    {
    	x=niupple(l[i],r[i])%n;
		y=mountvoom(l[i],r[i])%n;
		if(x>y) 
		{
			min=y;
			max=x;
		}
		else{
			min=x;
			max=y;
		}
		xx=hugegun(min,max);
		printf("%d\n",xx);
	}
	return 0;
}