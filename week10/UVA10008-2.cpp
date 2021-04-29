#include <stdio.h>
char line[10000];
int ans[26];///出現次數
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);

		for(int  k=0;line[k]!=0;k++){
			char c = line[k];
			//轉換大小寫
			if( c>='A' && c<='Z') printf("大");
			else if(c>='a' && c<='z')printf("小");
			else printf("他");
		}
	}///scanf讀一的東西;gets讀一整行。

}
