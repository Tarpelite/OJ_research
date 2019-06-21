#include <stdio.h>
#include <math.h>
int is_prime(int x) {
	int now;
if (x == 1) return 0;
for (now = 2 ; now * now <= x; now ++){
if (x%now == 0)
return 0;
}
return 1;
}
int main(){
	int n,m,i;
	scanf("%d",&n);
	i=n+1;
	while(!is_prime(i)){
		++i;
	}
	printf("%d",i);

return 0;
}