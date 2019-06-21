#include <stdio.h>
#define maxn 1001001

int a[maxn], b, n, k;
char ch[maxn];

int main(){
    int cnt = 0, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
      scanf("%d", &x), a[x]++;
    scanf("%d", &k);
    for (int i = 100000; i; i--){
        if (a[i]) k--;
        if (k == 0){
          printf("%d %d", i, a[i]);
          return 0;
        }
    }
}