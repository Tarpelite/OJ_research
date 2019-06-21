#include <stdio.h>
#define maxn 1001001

int a[maxn], b, n, m, q[maxn];
int v[maxn][20], w[maxn][20], p[maxn][20];//v==sigma, w == pi, p == xor;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int main(){
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);
  q[0] = 1;
  for (int i = 1; i <= 20; i++)
    q[i] = q[i - 1] * 2;
  for(int i = 1; i <= n; i++) {
    p[i][0] = w[i][0] = v[i][0] = a[i];
  }
  for (int j = 1; j <= 12; j++)
    for(int i = 1; i <= n; i++) {
      v[i][j] = (v[i][j - 1] + v[i + q[j - 1]][j - 1]) % n;
      w[i][j] = w[i][j - 1] * w[i + q[j - 1]][j - 1] % n;
      p[i][j] = p[i][j - 1] ^ p[i + q[j - 1]][j - 1];
    }

  for (int i = 1; i <= m; i++) {
    int sum = 0, pi = 1, l, r, ans = 0;
    scanf("%d%d", &l, &r);
    l++, r++;
    for (int j = 12; j >= 0; j--)
      if ((l + q[j]) <= r + 1){
        sum = (sum + v[l][j]) % n;
        pi = (pi * w[l][j]) % n;
        l += q[j];
      }
      l = sum, r = pi;
      l++, r++;
  //    printf("%d %d\n", l, r);
      if (l > r) swap(&l, &r);
      for (int j = 12; j >= 0; j--)
      if ((l + q[j]) <= r + 1){
        ans = ans ^ p[l][j];
        l += q[j];
      }
      printf("%d\n", ans);
  }

}

/*
5 3
1 2 3 4 5
0 4
2 3
1 4*/