#include <stdio.h>
#include <string.h>
int main()
{
	char a[80],b=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a)/2;i++){
		if(a[i]!=a[strlen(a)-1-i]){
			b=1;
			printf("NO");
			break;
		}
	}
	if(b==0)printf("YES");
}
