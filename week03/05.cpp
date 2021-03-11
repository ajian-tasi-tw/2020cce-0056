#include <stdio.h>
int main()
{
	int n,ans=0,a=8;
	scanf("%d",&n);
	for(int i=1000;i>=1;i/=10){
		if(n/i!=0) ans+=a;
		a/=2;
		n%=i;
	}
	printf("%d\n",ans);
}
