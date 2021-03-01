#include <stdio.h>
int main()
{
	int a[10],n,b=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n!=0){
			a[i]=n;
			b++;
		}
	}
	for( int i=b-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
