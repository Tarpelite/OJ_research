#include<stdio.h>
int a[10000000];
int b[10000000]={0};
//将输入的数字作为自变量，个数作为a[i]的因变量
void jiShu(int n)
{
	int i;
	for(i=0;i<n;i++) b[a[i]]++;
 }

int paiXv(int k,int n)
{
	int xu=0,i=n;
	while(xu<k)
	{
	    if(b[i]!=0) xu++;
		i--;
	}
	return i+1;
	//第k大的数应是i-1，个数为b[i-1] 
 }

int main()
{
	int n,k,i,shu,ge;
	scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&k);
	jiShu(n);
	shu=paiXv(k,n);
	ge=b[shu];
	printf("%d %d",shu,ge);
	return 0;
 }