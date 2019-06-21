#include<stdio.h>
int nmsl(int n){
	int i,m,t; 
	for(i=n+1;;i++)
	{
		m=0;
	 for(t=2;t<i;t++)
	 {if(i%t==0)
	 m++;
	 }if(m==0)
break;
}return i;
}
int main()
{
     int n;
	 scanf("%d",&n);
	 printf("%d",nmsl(n));
     
	
}