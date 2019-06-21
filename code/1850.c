#include <stdio.h>
int feizhishu(int x);
int main(){
	int n,next;
	scanf("%d",&n);
	next=n+1;
	while(feizhishu(next)==1){
		next++;
	}
	printf("%d\n",next);
	return 0;
} 
int feizhishu(int x){
	if(x==2) return 0;
	int k=2;
	while(x%k!=0) k++;
	if(k==x) return 0;
	else return 1;
}