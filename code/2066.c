#include <stdio.h>
int m,n,s,a[20];
int main()
{
    int c(int k);
    s=0; a[0]=0;
    scanf("%d%d",&m,&n);
    printf("%d\n",c(1));
     }
int c(int k){
         int i,j;
         if(k<=n)	{
                for(i=a[k-1]+1;i<=m;i++)
                {
                    a[k]=i;
         if(k==n)
                {				s++;

         	}
         else
            c(k+1);
         }
         }
         return s;
         }