#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	if(b<a){
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(i%5==0)printf("%d\n",i);
	}
}
