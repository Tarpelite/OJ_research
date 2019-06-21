#include<stdio.h>
int main()
{    int i,a,n,m,k=1,c=1;
scanf("%d%d",&m,&n);
for(i=1;i<=n;i++){
	k=k*(m+1-i);	
}
for(i=1;i<=n;i++){
	c=c*(n+1-i);
}
a=k/c;
printf("%d",a);
	return 0;
}