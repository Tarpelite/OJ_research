#include <stdio.h>
int main (){
	int a;
	int b;
	scanf ("%d",&a); 
	for (int i=a+1;;i++)
	{	for(int j=2;j<i;j++)
		{if (i%j==0){
		b=0;
		break;}
		else {b=1;}
		} 
		if (b!=0)
		{printf ("%d",i);
		break;
		}
	}
	return 0;
}