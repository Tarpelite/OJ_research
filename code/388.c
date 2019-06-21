#include<stdio.h>
int iszs(int a)
{
	int b=0;

for(int i=2;i<a;i++)

{ if(a%i==0){
b++;

}
}

if(b==0){

return 1;}

else {return 0;}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i=n;
    while(i++)
    {
    	if(iszs(i))
    	{
    		printf("%d",i);
    		break;
		}
	}
	return 0;
 }