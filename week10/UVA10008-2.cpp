#include <stdio.h>
char line[10000];
int ans[26];///�X�{����
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);

		for(int  k=0;line[k]!=0;k++){
			char c = line[k];
			//�ഫ�j�p�g
			if( c>='A' && c<='Z') printf("�j");
			else if(c>='a' && c<='z')printf("�p");
			else printf("�L");
		}
	}///scanfŪ�@���F��;getsŪ�@���C

}
