#include<stdio.h>
#include<math.h>

int prime_num(int x){
	
	int i,s;
	s=(int)sqrt((double)x);
	for(i=2;i<=s;i++){
		if(x%i==0)
		break;
	}
	if(i>s)
	return x;
	else
	return 0;
}

int main()
{
	int m,w,o;
	
	scanf("%d",&m);
	
	for(o=m+1;o<=199999;o++){
		w=prime_num(o);
		if(w==0)
		continue;
		else
		break;
	}
	printf("%d",o);
	return 0;
	
 }