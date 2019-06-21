#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int inc(const void *a,const void *b)
{
	return *(int *)b - *(int *)a;
}




int main(int argc, char *argv[]) {
	int n,k,i,t,f=1,j;

	scanf("%d",&n);
		int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	qsort(a,n,sizeof(int),inc);
	
	scanf("%d",&k);
	for(i=0;i<k-1;i++)
	{
		if(a[i]==a[i+1])
		k=k+1;
	}
	printf("%d ",a[k-1]);
	
	while(a[k-1]==a[k])
	{
		k=k+1;
		f=f+1;
	}
	
	printf("%d",f);
	return 0;
}