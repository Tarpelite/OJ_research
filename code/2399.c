#include<stdio.h>
int b[100001]={0};
int main()
{
   int n,K;
   int a; 
   scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	{
 		scanf("%d",&a);
 		b[a]+=1;
 		}
 		scanf("%d",&K);
    for(int j=100001;j>=0;j--)
    {
 		if(b[j]!=0)
 		K=K-1;
 		if(K==0)
 		{printf("%d %d",j,b[j]);
 		break;}
	 		}

return 0;
}