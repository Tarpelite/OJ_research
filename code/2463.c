#include<stdio.h>
int main()
{    int is_prime(int q);
    int n,m,i,j;
    scanf("%d",&n);
	for(m=n+1;m <100004;m++)
	{
		j=is_prime(m);
		if(j==1)
		break;
		}
	printf("%d",m);
	return 0;
} 
int is_prime(int q){
	int ji;
	int fuck=0;
	for(ji=2;ji*ji<=q;ji++)
	{   if(q%ji==0)
		fuck++;
	}
	if(fuck==0)
	  return 1;
	else
	  return 0;
}