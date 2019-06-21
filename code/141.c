#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	fuck(n,m);
}
int fuck(int a,int b)
{
int i;
 long long int sum=1;
 if(b<a-b)
 b=a-b;
 for(i=b+1;i<=a;i++)
 sum*=i;

 for(i=1;i<=a-b;i++)
 sum/=i; 
 
 printf("%d",sum);
 return 0;
}