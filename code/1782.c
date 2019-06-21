#include<stdio.h>
int a[10000000];
int main()
{
	int n,i,k;
	int b[100001]={0};
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		scanf("%d",&a[i]) ;  //a[1] 第一个数 
		b[a[i]]+=1;         
	}
    scanf("%d",&k);
    int j=100000;
	int cnt=0;

	while(1)
	{
		if(b[j]!=0) cnt+=1;
		if(cnt==k) break;
		j--;
	}  	
	printf("%d %d",j,b[j]);
return 0;
 }