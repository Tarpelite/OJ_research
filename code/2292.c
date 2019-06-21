#include<stdio.h>
#include<math.h>
int main()//100003Îª´ËÌâ×î´óÖÊÊý 
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=n+1;i<=100003;i++){
		int j,p=1;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				p=0;
				break;
			}
		}
		if(p==1){
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}