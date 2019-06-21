#include<stdio.h>
int a[10002];
int N(int l,int r,int n)
{
 	int sum=0;
 for(int i=l;i<r+1;i++)
   sum=sum+a[i];
   sum=sum%n;
   return sum;
}
int M(int l,int r,int n)
{
 	int end=1;
 	for(int i=l;i<r+1;i++)
     end=end*a[i]%n;
     return end;
}  
int H(int l,int r)
{
 	int result=0;
 	for(int i=l;i<r+1;i++)
 	result=result^a[i];
 	return result;
} 
int max(int a,int b)
{
 	if(a>=b)
 	return a;
 	return b;
}

int min(int a,int b)
{
 	if(a>=b)
 	return b;
 	return a;
}

int main(){
	int n,K;
	int l,r,sum,result,end;
	scanf("%d%d",&n,&K);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int j=0;j<K;j++)
	{
	  scanf("%d%d",&l,&r);
	  sum=N(l,r,n);
	  end=M(l,r,n);
	  result=H(min(sum,end),max(sum,end));
	  
	  printf("%d\n",result);
	 		}
return 0;}