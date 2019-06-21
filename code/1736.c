#include<stdio.h>
#include<math.h>

long long jiecheng(int x)
{
    int i;
    long long r = 1;
    for(i = 1 ; i <= x ; i++){
        r = r * i;
    }
    return r;
}

int main()
{
    int n, m;
    long long fenzi, fenmu, r;
    scanf("%d%d", &m, &n);
    fenmu = jiecheng(n);
    fenzi = jiecheng(m) / jiecheng(m-n);
    r = fenzi / fenmu;
    if(n == 0){printf("%d", n);}
    else{printf("%lld", r);}
    return 0;
}