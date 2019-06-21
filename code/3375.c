#include <stdio.h>
    int prime[100000], isPrime[2000000];
    int main()
    {
    int i, j;
    for (i = 2; i <= 100500; i++)
    {
    if (!isPrime[i])
    prime[++prime[0]] = i;
    for (j = 1; j <= prime[0] && i * prime[j] <= 1000000; j++)
    {
    isPrime[i * prime[j]] = 1;
    if (i % prime[j] == 0)
    j = prime[0] + 1; //结束循环
    }
    }
    int x;
    scanf("%d", &x);
    for(int i=x+1;;i++)if(isPrime[i]==0){printf("%d\n", i);break;}
    return 0;
    }