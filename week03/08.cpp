#include <stdio.h>
int main()
{
	char a[10];
	int b=0;
	scanf("%s", a);
	while(a[b])
	{
		if(a[b]>='a' && a[b]<='z'){
			a[b]-=32;
		}
		else if(a[b]>='A' && a[b]<='Z'){
			a[b]+=32;
		}
		b++;
	}
	printf("%s\n", a);

}
