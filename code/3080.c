#include<stdio.h>
int zhi(int);
int main()
{
   int a,b,c;
   scanf("%d",&a);
   b=a+1;c=1;
   
   while(c==1){
   	  if(zhi(b)==1)
   	  {
		    printf("%d",b); break; }
   	  b++; 
   }
}

int zhi(int x){
	int y,z,m,n=0;
	for(y=2;y*y<=x;y++)
	  if(x%y==0)
	    return 0;
	return 1;
	
}