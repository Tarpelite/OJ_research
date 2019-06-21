#include<stdio.h>
int main()  
{  
    long C(long m, long n);//定义计算排列组合的函数  
      
    long numberm, numbern, numberc;//应满足numbern >= numberm  
    scanf("%ld%ld", &numberm, &numbern);  
    numberc = C(numberm, numbern);//调用计算排列组合的函数  
    printf("%ld\n", numberc);  
  
    return 0;  
}  
  
long C(long m, long n)  
{  
    long i, c = 1;  
    i = n;//将m赋值给i  
    while(i != 0)//计算n! - m!  
    {  
        c *= m;  
        m--;  
        i--;  
    }  
    while(n != 0)//求c = (n! - m!) / m!  
    {  
        c /= n;  
        n--;  
    }  
    return c;  
}