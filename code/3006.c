#include <stdio.h>
int main(){
	int n,k,l,r,num[100],i,s1=0,s2=1,min,max,an=0;
	scanf("%d %d",&n,&k);
	for (i=0;i<n;i++)
	    scanf("%d",&num[i]);
	while (k>0){
		scanf("%d %d",&l,&r);
		for (i=l;i<r+1;i++){
			s1+=num[i];
			s2*=num[i];
			while (s2>n)
			    s2=s2-n;
		}
		s1%=n;
		s2%=n;
		if (s1>s2){
			max=s1;
			min=s2;
		}
		else{
			max=s2;
			min=s1;
		}
		for (i=min;i<max+1;i++)
		    an^=num[i];
		printf("%d\n",an);
		k--;
		s1=0;
		s2=1;
		an=0;
	}
	return 0;
}