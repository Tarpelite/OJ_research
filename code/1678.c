#include<stdio.h>
#include<math.h>
int zh_(int i){
	int j;
	for(j=2;j<=sqrt(i);j++){
		if(i%j==0)
		return 0;
	}
	return 1;
}

int main()
{
    int n,i;
	scanf("%d",&n);
	i=n+1;
	while(zh_(i)==0){
		i++;
	}
	printf("%d\n",i);
	return 0;
}