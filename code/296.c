#include <stdio.h>
#include <stdio.h>
 
#define N 1000000     //这个可以随意定义，只要不溢出
int main(){
	int prime[N] = { 0 }, //存储素数，并初始化为0
		flag[N] = { 0 },  //数字对应的素数标志。0 --素数  1 -- 非素数
		i, j, f,count;
		scanf("%d",&f);
	for (i = 2, count = 0; i < N; i++){
		if (!flag[i])              //刚进入i对应的循环时，如果素数标志为0，那代表i不能被所有比i小的正整数整除，所以是素数。
			prime[count++] = i;
		for (j = 2 * i; j<N; j += i){   //筛掉所有能被i整除的数。
			flag[j] = 1;
		}
		
	}
	for(i=0;i<1000000;i++){
	    if(f==prime[i]){
		
		printf("%d", prime[i+1]);
	}
	
}
	return 0;
}