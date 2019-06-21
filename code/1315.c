#include<stdio.h>
int main()
{
	int n,m=0;
	scanf("%d",&n);
	int j=n+1;
	int i;
	while(m==0){
	int	k=0;
	for(i=2;i<j/2;i++){
		if(j%i!=0)
		continue;
		else
		k++;
	}
	if(k>0)
	j=j+1;
	else{
    printf("%d",j);
    m=1;
	}
	
 }
 return 0;
}