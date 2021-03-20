#include <stdio.h>
int max_digit(int n){
	int a=0;
	while(n){
		if(n%10>a) a=n%10;
		n/=10;
	}
	return a;
}
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
