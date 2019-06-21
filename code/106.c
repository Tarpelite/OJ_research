#include <stdio.h>

int fN(int n, int *a, int l, int r);
int fM(int n, int *a, int l, int r);
int fH(int n, int *a, int l, int r);

int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a > b) ? b : a; }

int main()
{
  int l, r, n, a[1000], k, ans[10000];
  int i, n0, m0;

  scanf("%d%d", &n, &k);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < k; i++)
  {
    scanf("%d%d", &l, &r);
    m0 = fM(n, a, l, r);
    n0 = fN(n, a, l, r);
    if (n0 < m0)
    {
      ans[i] = fH(n, a, n0, m0);
    }
    else
    {
      ans[i] = fH(n, a, m0, n0);
    }
  }

  for (i = 0; i < k; i++)
  {
    printf("%d\n", ans[i]);
  }

return 0;
}


int fN(int n, int *a, int l, int r)
{
  int i, ans = a[l] % n;
  for (i = l + 1; i <= r; i++)
  {
    ans = ans%n+ (a[i] % n);
  }
  return (ans % n);
}

int fM(int n, int *a, int l, int r)
{
  int i, ans = a[l] % n;
  for (i = l + 1; i <= r; i++)
  {
    ans = (ans%n)*  (a[i] % n);
  }
  return (ans % n);
}

int fH(int n, int *a, int l, int r)
{
  int i, ans = a[l];
  for (i = l + 1; i <= r; i++)
  {
    ans = ans ^ a[i];
  }
  return ans;
}