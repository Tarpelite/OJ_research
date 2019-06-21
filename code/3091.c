#include<stdio.h>
int main()  
{  
    long C(long m, long n);  
      
    long numberm, numbern, numberc;  
    scanf("%ld%ld", &numberm, &numbern);  
    numberc = C(numberm, numbern);  
    printf("%ld\n", numberc);  
  
    return 0;  
}  
  
long C(long m, long n)  
{  
    long i, c = 1;  
    i = n; 
    while(i != 0)  
    {  
        c *= m;  
        m--;  
        i--;  
    }  
    while(n != 0)  
    {  
        c /= n;  
        n--;  
    }  
    return c;  
}