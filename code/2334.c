#include <stdio.h>
#include <math.h>
#include <string.h>
#define maxn 200100

int vis[maxn], pri[maxn];
int n, t, cnt = 0;

int main(){
  memset(vis, 0, sizeof(vis));
  vis[0] = vis[1] = 1;
  for (int i = 2; i <= maxn - 2000; i++){
    if (!vis[i])
      pri[++cnt] = i;
    for (int j = 1; j <= cnt && i * pri[j] <= maxn - 300; j++){
      vis[i * pri[j]] = 1;
      if (i % pri[j] == 0) break;
    }
  }
    scanf("%d", &n);
    for (int i = 1; i <= cnt; i++){
      if (pri[i] == n) {
        printf("%d", pri[i + 1]);
        return 0;
      }
    }
}