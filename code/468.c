#include<stdio.h>
int main()
{int n,m,i,s;
scanf("%d",&n);
for(m=n+1;;m++)
{for(i=2,s=0;i<=m-1;i++)
     {if(m%i!=0) s=s;
        else s=s+1;
                    }
   if(s==0) break;
}
printf("%d",m);
return 0;
}