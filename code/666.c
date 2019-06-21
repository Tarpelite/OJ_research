/*
 Author: 戴祺
 Result: CE	Submission_id: 1573666
 Created at: Sun Apr 07 2019 18:40:26 GMT+0800 (CST)
 Problem_id: 2001	Time: 0	Memory: 0
*/

#include <stdio.h>
int main()
{
  int a, b, c, d, e, f, i, j;//fndjeiafbjiresfhu
  scanf("%d%d", &a, &b);
  for (i = 1, c = b; i < b; i++)
  {
    c = c * i;
  }
  for (j = 1, d = a, e = 1; j <= b; j++)
  {
    e = d * e;
    d--;
  }
  f = e / c;
  printf("%d", f);
  return 0;
}