#include <stdio.h>
#include <math.h>
int main() {
	int i,j,n,t;
	scanf("%d",&n);
	for (i=n+1;; i++) {
		t=0;
		for (j=2; j<i; j++) {
			if (i%j==0) {
				t=0;
				break;
			}
			t=1;		
		}
		if (t) {
			break;
		}
	}

	printf("%d",i);
	return 0;
}