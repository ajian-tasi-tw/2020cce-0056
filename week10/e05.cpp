#include <stdio.h>
int main()
{
	int a,b,c=0;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,c);
}
