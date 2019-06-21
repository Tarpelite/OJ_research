#include<stdio.h>
int s1[100000]={0};
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{int p;
	scanf("%d",&p);
	s1[p]++;}
	int k,j;
	 scanf("%d",&k);
	 for(int i=99999;i>=0;i--)
	 {
	 	if(s1[i]!=0)
	 	{
	 	k--;
	 	j=i;}
	 	if(k==0)
	 	break;	
	 }
printf("%d %d",j,s1[j]);
return 0;
}