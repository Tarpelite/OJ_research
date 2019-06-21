#include <stdio.h>


int main() {
	int m,n,fz,fm;
    
	scanf("%d%d",&m,&n);
	int i=m;
	for(fz=1;m>=i-n+1;m--)
    fz*=m;
    for(fm=1;n>=1;n--)
    fm*=n;
    printf("%d",fz/fm);
	return 0;
}