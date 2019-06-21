#include<stdio.h>
int is(int);
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=a+1;i<200000;++i)
    {
        if(is(i))
        {
             printf("%d\n",i);
             break;
        }
    }

	return 0;
 }
int is(int a)
{
    int i;
    for(i=2;i<a/2;++i)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}