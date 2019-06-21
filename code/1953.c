#include<stdio.h>
int main()
{
	int n,K,l,r,N=0,M=1,H,x,y,X,Y;
	scanf("%d%d",&n,&K);
	int A[n-1];
	for(int i=0;i<=n-1;i++)
	scanf("%d",&A[i]);
	for(int i=1;i<=K;i++)
	{
	  scanf("%d%d",&l,&r);
	  for(int i=l;i<=r;i++)
	  {
	  	N=N+A[i];
	  }
	  x=N%n;
	  for(int i=l;i<=r;i++)
	  {
	  	M=(M*A[i])%n;
	  } 
	  y=M%n;
	  X=(x<y)?x:y;
	  Y=(x>=y)?x:y;
	  if(X==Y)printf("%d\n",A[X]);
	  else
	  { 
	    int i;
	    for(i=X+1,H=A[X];i<=Y;i++)
	    H=H^A[i];
	    printf("%d\n",H);
      }
      N=0,M=1;
    }
	return 0;
}