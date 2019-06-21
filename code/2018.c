#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#define NDEBUG
#include <assert.h>
int a[10000005];
int cmp(const void*a,const void*b) {
	return  (*(int *)b-*(int *)a);
}
int main() {
	int n,i=0,rank,ji=1;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	scanf("%d",&rank);
	qsort(a,n,4,cmp);
	i=0;
	while(rank--) {
		ji=1;
		for(; i<n; i++) {

			if(a[i]==a[i+1]) {
				ji++;
			} else {
				if(rank!=0) {
					i++;
					break;
				} else {
					printf("%d ",a[i]);
					printf("%d",ji);
					return 0;
				}
			}

		}
	}
}