#include <stdio.h>
int main()
{
	int n,a=0,b;
	scanf("%d",&n);
	b=n;
	while(n!=0){
		a=a*10+(n%10);
		n/=10;
	}
	printf("%d+%d=%d\n",b,a,a+b);
}
