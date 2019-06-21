#include <stdio.h>
int main()
{
	int n,m,i,s,count=0;
	scanf("%d",&n);
	for(m=n+1;;m++){
		count=0;
		for(i=2;i<m;i++){
			s=m%i;
			if(s==0){
				count++;
				break;
			}
		}
		if(count==0){
			printf("%d",m);
			break;
		}
	}
	return 0;
}