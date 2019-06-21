#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int h=n+1;
	while(h<=110000){
		int count=0;
		for(int i=2;i*i<=h;i=i+1){
			
			if(h%i==0)
			{
				count++;
				continue;
			}
		}
		if(count==0) {
			printf("%d",h);
			break;
		}
		h++;
		count=0;
	}
	return 0;
}