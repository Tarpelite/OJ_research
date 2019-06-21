#include<stdio.h>
int A[10005],B[10005];
int max(int a,int b)
{if(a>b) return a;
else return b;
}
int min(int a,int b)
{if(a<b) return a;
else return b;
}
int N(int l,int r,int n)
{int s1=0,i;
for(i=l;i<=r;i++)
{s1=s1+A[i];
}
return s1%n;
}
int M(int l,int r,int n)
{int s2=1,i;
for(i=l;i<=r;i++)
{s2=(s2*A[i])%n;
}
return s2%n;
}
double H(int l,int r)
{int s3,i;
for(i=l;i<=r;i++)
   {if(i==l) s3=A[l];
       else {s3=s3^A[i];}
                               }
return s3;
}
int main()
{int n,K,l,r,i,j;
scanf("%d %d",&n,&K);
for(i=0;i<=n-1;i++) {scanf("%d",&A[i]);}
for(j=0;j<=K-1;j++){
	scanf("%d %d",&l,&r);
	B[j]=H(min(M(l,r,n),N(l,r,n)),max(M(l,r,n),N(l,r,n)));
	
                                   }
for(j=0;j<=K-1;j++){
	printf("%d\n",B[j]);
                       }
return 0;
}