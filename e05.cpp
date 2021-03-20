#include <stdio.h>
int main()
{
	char a[100],i=0;
	scanf("%s",&a);
	while(a[i]!=0){
		if(a[i]!='2')printf("%c",a[i]);
		i++;
	}
	printf("\n");
}
