#include<stdio.h>
int a[100001];
int main()
{int n,m,k,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&m);
a[m]+=1;

}
scanf("%d",&k);
for(i=100000;k>0;i--)
{if(a[i]!=0)
k--;
}
i++;
printf("%d %d",i,a[i]);
return 0;
	
}