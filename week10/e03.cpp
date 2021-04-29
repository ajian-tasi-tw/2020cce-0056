#include <stdio.h>
int main()
{
	int n,a,ans=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter a value: ");
		scanf("%d",&a);
		ans*=a;
	}
	printf("Product of the %d values is %d",n,ans);
}
