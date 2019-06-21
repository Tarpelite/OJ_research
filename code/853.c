#include<stdio.h>//小心超时 ，所以不要用双重循环,不要排序 ,只关心出现了哪些数，每个数出现了多少次 
#define max_n 100000
int a[max_n+5];
int main()
{
	int n,k,m,i;
	int a[max_n+5],km=max_n,kM=0;//a[n]表示n出现了几次
	 scanf("%d",&n);
	 while(n--){
	 	scanf("%d",&k);
	 	a[k]++;
	 	if(k<km)km=k;
	 	if(k>kM)kM=k;
	 }
	scanf("%d",&k);//第k大，实际上就是第k个使得a[i]》0的整数i ,大于0表示这个数出现了 
	for(i=kM;i>=km;i--){
		if(a[i]>0)k--;
		if(k==0)break; 
	}
	printf("%d %d",i,a[i]);
	return 0;
}