#include <stdio.h>

int main()
{
    int a,i,j,y,b;
    scanf("%d",&a);        //输入质数

    for(i=a+1; i<100005; i++)    //找下一个质数
    {
        for(j=2; j<=i; j++)      //判断质数
        {
          if(i%j==0)
           break;
        }


         if(j==i)
           {
               printf("%d",i);
           break;
}
    }
    return 0;


}