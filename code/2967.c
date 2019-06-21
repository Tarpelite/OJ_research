#include <stdio.h>
#define maxn 1001001

int a[maxn], b, n, m;
char ch[maxn];

int GetC(int a, int b) {
  if (a == b || b == 0)
    return 1;
  if (a == 1) return 1;
  return GetC(a - 1, b) + GetC(a - 1, b - 1);
}
int main(){
    scanf("%d%d", &n, &m);
    printf("%d", GetC(n, m));
    return 0;
}