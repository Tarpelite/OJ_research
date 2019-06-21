#include<stdio.h>
#include<math.h> 
int main()
{
	int a,i;
	scanf("%d",&a);
	i=a+1;
	while(i<1000000){
		int p,q;
		q=(int)sqrt(i);
		for(p=2;p<=q;p++){
			if(i%p==0) 
			break;			
		} 
        if(p>q)
	    break;
	    else i++;
	}
	printf("%d\n",i);
	return 0;
}