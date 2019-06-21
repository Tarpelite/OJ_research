#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
int a[10000000];
int cmp(const void *a,const void *b)
{	
return(*(int *)b-*(int *)a);  
//实现的是降序排序
}
int main(void)
{
int n,i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);/*printf("\n")*/;}	
qsort(a,n,sizeof(a[0]),cmp);
//选择排序后，我们要实现查找的功能
scanf("%d",&k);
int nowtimes=1;
int nowvalue=0;
int ans;
for(i=1;i<n;i++)
{
	
	
	
		if(a[i]==a[i-1])
		{
			nowtimes++;
		}
		else
		{
			nowvalue++;
			
			ans=nowtimes;
			nowtimes=1;
		}
		if(nowvalue==k)
		break;
	
	
	
}

printf("%d %d",a[i-1],ans);
 
return 0;
	
}