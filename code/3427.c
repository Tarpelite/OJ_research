#include<stdio.h>
int gcb(int a)
{
    /*a==1? return 1:;
    a==2? return 1:;
    a==3? return 1:;*/
    if (a==1)
        return 1;
    else if(a==2)
        return 1;
    else
    {
        for(int i=2;i<a;i++)
    {
       if(a%i==0)
       return 0;
    }
    return 1;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    while(!gcb(a+1))
        a++;
    printf("%d",a+1);

}