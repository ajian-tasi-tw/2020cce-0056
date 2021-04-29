#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);
		printf("%s\n",line);
	}///scanf讀一的東西;gets讀一整行。
}
