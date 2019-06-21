#include <stdio.h>
int a[10000000], aa[10000000]={0};
int main()
{
    int n, k, i, j, m, sum = 0,t;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for(i=0;i<k;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                m = a[i];
                a[i] = a[j];
                a[j] = m;
                t = aa[i];
                aa[i] = aa[j];
                aa[j] = t;
            }
            if(a[i]==a[j]){
                a[j] = 0;
                aa[j] = 0;
                aa[i]++;
            }
        }
    }

    printf("%d %d", a[k-1], aa[k-1]+1);
    return 0;
}