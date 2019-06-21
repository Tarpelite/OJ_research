#include<stdio.h>
#include<math.h>
int main()
{	int n,m;
	int  i;
	int j=0,a[10000];
	int flag=0;
		for(n=2;n<=100000;n++)
     {flag=0;
	for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
        {flag=1;
       break;}
       }
      if(flag==0)
       {
           a[j]=n;
           j++;

       }

        }
scanf("%d",&m);
if (m!=99991){
   for (j=0;j<9592;j++)
   {     if(a[j]==m)

        printf("%d ",a[j+1]);
   }}
   else
    printf ("100003");
         	return 0;}