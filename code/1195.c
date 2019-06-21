//第k大的数
#include<stdio.h>
/*int main(){
int n,k,j,i,flag,times=1,c;
scanf("%d",&n);
int m[n];
for(i=0;i<n;i++) 	scanf("%d",&m[i]);
scanf("%d",&k);
for(j=0;;j++){
	flag=1;
	for(i=0;i<n;i++)
		flag+=(m[j]<m[i]);
	if(flag==k){
		c=j;
		times++;
		break;
}
}
for(j=c+1;j<n;j++)
	times+=(m[j]==m[c]);
printf("%d ",m[c]);
printf("%d",times-1);
return 0;


}*/

int n,t,c = 0,k,i,ttt,ccc;
int a[101111];

int main(int argc,char** argv)
{
    scanf("%d",&n);
    for( i = 1;i <= n;i++)
    {
        scanf("%d",&t);
        ccc=a[t];
        ccc++;
        a[t]=ccc;
    }
    scanf("%d",&k);
    for( i = 100000;i >= 1;i--)
    {
        if(a[i]){
        	ttt=c-1;
        	ttt++;
        	c=ttt+1;
		}
        if(c == k)
        {
            printf("%d %d",i,a[i]);
            return 0;
        }
    }
    return 0;
}


/*int s[10000];
int main() {
	int n,m,N,k,a,i;
	scanf("%d\n",&n);

	for( i=0; i<n; i++) {
		scanf("%d",&m);
		s[m]++;
	}
	scanf("%d",&k);
	for ( i=100000; k>0; i--) {
		if (s[i]!=0)
			k--;
		if(k==0) {
			N=s[i];
			a=i;
		}

	}

	printf("%d %d",a,N);
	return 0;
}*/ 
/*
  作者：Golden_Apple,
  转载请注明出处，
  请勿用作商业用途。
*/