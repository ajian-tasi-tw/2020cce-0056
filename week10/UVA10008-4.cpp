#include <stdio.h>
char line[10000];
int ans[26];///出現次數
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);
		for(int  k=0;line[k]!=0;k++){
			char c = line[k];
			//轉換大小寫
			if( c>='A' && c<='Z') ans[c-'A']++;///計算字母有幾個,再放入ans[]裡統計。
			else if(c>='a' && c<='z') ans[c-'a']++;
		}
	}
	for(int i=0;i<26;i++){
		for(int j=i+1;j<26;j++){//如果數字相同，但字母大的要在前面。
			if(ans[i]<ans[j] || (ans[i]==ans[j] && alphabet[i]>alphabet[j])){///alphabet為字母比較，ans為個數比較，這樣能分開比
				int temp=ans[i];
				ans[i]=ans[j];
				ans[j]=temp;
				char c =alphabet[i];
				alphabet[i]=alphabet[j];
				alphabet[j]= c;
			}
		}
	}
	for(int i=0;i<26;i++){
		if(ans[i]>0)printf("%c %d\n",alphabet[i],ans[i] );
	}
}
