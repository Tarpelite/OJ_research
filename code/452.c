#include<stdio.h>
#include<stdlib.h>
int get_first_prime(int n)
{
int i,j;
int res;
int order=0;
for(i=n+1;i<2*n;i++)
        {
        for(j=2;j<(i/j+1);j++)
                {
                order++;
                res=i/j;
                if((res-j)<=1 && i%j!=0)
                        {
                        return i;
                        }
                if(i%j == 0)
                        {
                        break;
                        }
                else
                        continue;
                }
        }
printf("order is %d\n",order);
return 0;
}
int main()
{
int n;
scanf("%d",&n);
int res=0;
res=get_first_prime(n);
printf("%d\n",res);
return 0;
}