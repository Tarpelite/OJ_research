#include<stdio.h>
#include<math.h>
int main(){
	int n,i=1,j=1,t=0,s;
	scanf("%d",&n);
	for(i=1;i<100004-n;i++){
		s = n+i;
		for(j=2;j<=sqrt(s);j++){
			if(s%j==0){
			    t=1;
				break;
				}
			else{
				t = 0;
			}
			
		}
	if(t==0){
		printf("%d",s);
		break;
	} 

	}
	return 0;
	
}