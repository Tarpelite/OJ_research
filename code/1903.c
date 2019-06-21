#include <stdio.h>  
#include <math.h>

#define N 10001
int primes[N]; //质数表

int isPrime(int primes[], int m)
{
    int i;
    for(i=0; primes[i]*primes[i] <= m; i++)
    {
        if (m % primes[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

int init_primes(int primes[], int Q) //要求Q >= 3
{
    int i, j, count, num, step;
    primes[0] = 2; primes[1] = 3; primes[2] = 5; //头3个质数直接给
    count = 3;
    num = 7; step = 2; //初始为2

    while(count < Q)
    {
        step = 6 - step; // 构造 2-4-2-4-...序列，减少遍历
        if (isPrime(primes, num))
        {
            primes[count++] = num;
        }
        num += step;
    }
}

// binary find, non-recursive 
int bin_find(int b[],int key, int low, int high)
{
    int mid;
    while( low <= high ){
        mid = (low + high)/2;
        if( key == b[mid] )
            return mid;
        else if( key < b[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}


int main()
{
        int n,i;
        init_primes(primes, N); //质数表初始化
        scanf("%d", &n);
        i=bin_find(primes,n,0,N-1);
        printf("%d", primes[i+1]);
        return 0;
}