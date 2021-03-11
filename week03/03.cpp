#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	if(n<2000)printf("100\n");
	else if(n>2000){
		a=(n-2000)/500*5;
		if(n%500!=0)a+=5;
		printf("%d\n",a+100);
	}
}
