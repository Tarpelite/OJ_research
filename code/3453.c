#include<stdio.h>
int main()
{
	int s[200001]={0};
	for(int i=2;i<2000001;i++)
	{
		for(int j=2;i*j<200001;j++)
		if(s[i]==0)
		s[i*j]=1;
	}
	int p[200000]={0};
	int cnt=0;
	for(int i=0;i<200001;i++)
	if(s[i]==0)
	{
	p[cnt]=i;
	cnt++;}
//	for(int i=0;i<100001;i++)
//	printf("%d ",p[i]);
	int num;
	scanf("%d",&num);
	for(int i=0;i<=cnt;i++)
	{
		if(p[i]==num)
		printf("%d",p[i+1]); 
	}
	return 0;
}