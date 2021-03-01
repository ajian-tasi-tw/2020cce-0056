#include <stdio.h>
int MYPOWER(int a,int b){
	int ans=a;
	for(int i=b-1;i>0;i--){
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
