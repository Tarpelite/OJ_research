#include<stdio.h>
#include<math.h>
#include<string.h>
int zs(int);

int main()
{
	int n;
	int i;
	scanf("%d", &n);
	for(i = n + 1;;i++){
		if(zs(i) == 1){
		
		break;}
	}
	printf("%d", i);
	
	return 0;
}

int zs(int x)
{
	int o;
	int flag = 1; 
	if(x>2){
	
	for(o = 2;o<x;o++){
		if(x%o == 0){
			flag--;
		}
		
	}
  }
  
  return flag;  
}