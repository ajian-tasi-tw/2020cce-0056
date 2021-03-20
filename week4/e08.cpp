#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=i;k<n;k++){
			printf(" ");
		}
		for(int p=1;p<=2*i-1;p++){
			printf("*");
		}
		printf("\n");
	}
}
