#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/10000);
	n%=10000;
	for(int i=1000;i>=1;i/=10){
		printf("   ");
		printf("%d",n/i);
		n%=i;
	}
}
