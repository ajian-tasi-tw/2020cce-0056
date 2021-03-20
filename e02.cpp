#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(	a>='A' && a<='Z' ){
		printf("U");
	}
	else if( a>='a' && a<='z' ){
		printf("L");
	}
	else if( a>='0' && a<='9' ){
		printf("D");
	}
	else {
		printf("O");
	}
}
