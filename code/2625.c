#include<stdio.h>
int main()
{
    int m,n,t,s,p,q;
    scanf("%d%d",&m,&n);
    t=n,s=m,p=m,q=n;
    while(--n){
    	t=t*n;
    	
	}
	while(s>p-q+1){
		m=m*(s-1);
		s--;
	}
	printf("%d\n",m/t);
	return 0;
}