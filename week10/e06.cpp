#include <stdio.h>
#include <string.h>
int main()
{
	char a[50],b[50],i=0;
	scanf("%s%s",a,b);

	if(strlen(a)>strlen(b)){
		printf("1");
	}
	else if(strlen(a)<strlen(b)){
		printf("-1");
	}
	else {
		printf("%d",strcmp(a,b));
	}
}
