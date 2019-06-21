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
 if(b<a-b)//c(a,b)=c(a,a-b)? 可以减少运算
 b=a-b;
 for(i=b+1;i<=a;i++)//c(a,b)=a!/b!(a-b)! 再对此式约分???? ?
 sum*=i;

 for(i=1;i<=a-b;i++)
 sum/=i; 
 
 printf("%d",sum);
 return 0;
}