#include<stdio.h>
int zs(int a)
{
    int i;
		for (i = 2; i < a; i++)
			if (a%i == 0)break;
		if (i == a)
			return 1;
		else
			return 0;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a+1;
    while(zs(b)==0)
    b++;
    printf("%d",b);
    return 0;

}