#include<stdio.h>
int fn(int,int,int[],int);
int fm(int,int,int[],int);
int fh(int,int,int[],int);
int main(){
	int l,r,i,n,k,a[110],h1,h2,x,y;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&l,&r);
		x=fn(l,r,a,n);
		y=fm(l,r,a,n);
		h1=x<y?x:y;
		h2=x>y?x:y;
		printf("%d\n",fh(h1,h2,a,n));
	}
	return 0;
}
int fn(int nl,int nr,int na[],int nn){
	int ni,ansfn=0;
	for(ni=nl;ni<=nr;ni++){
		ansfn+=na[ni];
	}
	ansfn%=nn;
	return ansfn;
}
int fm(int ml,int mr,int ma[],int mn){
	int mi;int ansfm=1;
	for(mi=ml;mi<=mr;mi++){
		ansfm=(ansfm*ma[mi])%mn;
	}
	ansfm%=mn;
	return ansfm;
}
int fh(int hl,int hr,int ha[],int hn){
	int hi,ansfh=ha[hl];
	for(hi=(hl+1);hi<=hr;hi++){
		ansfh=ansfh^ha[hi];
	}
	return ansfh;
}