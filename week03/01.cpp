#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(b<a){
		temp=a;
		a=b;
		b=temp;
	}
	if(c<a){
		temp=c;
		c=a;
		a=temp;
	}
	if(c<b){
		temp=c;
		c=b;
		b=temp;
	}
	printf("%d\n",c-a);
}
