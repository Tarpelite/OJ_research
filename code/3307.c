#include<stdio.h>
#include<math.h>
int pri(int i);
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=n+1;i<200000;i++){
		if(pri(i)==1){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
int pri(int i)
{
	int j,k,x=0;
	k=sqrt(i);
	for(j=2;j<=k;j++){
		if(i%j!=0) x+=1; 
	}
	if(x==k-1) return 1;
	else return 0;
}