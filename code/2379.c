#include<stdio.h>
#include<math.h>
#include<string.h>
int a[1000000],b[1000000];
int compar(const void * a,const void * b)
{
	return (*(int *)a -*(int *)b);
}
int main()
{
	
	int n, i, j, hold, flag, o, k, l;
	int temp = 0;
	
	scanf("%d", &n);
	for(i = 0;i<n;i++){
		scanf("%d", a+i);//&a[i]
		
	}
	
	scanf("%d", &k);
	/*
	for(i = 0;i<n-1;i++){
		flag = 0;
		for(j = 0;j<n-1-i;j++){
		if(a[j]>a[j + 1])
		{
			hold = a[j];
			a[j] = a[j + 1];
			a[j + 1] = hold;
			flag = 1;
		}
	} if(flag == 0)
	break;
	}
	*/
	qsort(a,n,sizeof(int),compar);
	
	int kk=0;
	
	i=n-1;
	while(kk!=k)
	{
		if(a[i]!=a[i+1])
		{
			++kk;
		}
		--i;
	}
	int val=a[i+1];
	int cnt=1;
	for(i;i<n;--i)
	{
		if(a[i]==val)
		++cnt;
		
		if(a[i]!=val)
		break;
	}
	
	printf("%d %d",val,cnt);
	/*
	b[0] = a[0];
	o = 1;
	for(i = 1;i<n&&a[i]<=a[n - 1];i++){
		
			if(a[i] != a[i - 1]){
				b[o] = a[i];
			    o++;
		}
	}
	flag = b[o - k];
	printf("%d ", flag);
	for(i = 0;i<n;i++){
		if(flag == a[i])
		temp++;
	}
	printf("%d", temp);*/
	return 0;
}