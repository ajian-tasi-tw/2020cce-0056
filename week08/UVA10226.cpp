#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare (const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int n,N=0,b=1;//n個大資料
	scanf("%d\n\n",&n);//把兩個\n跳行讀掉
	//float c,d=100; 也可以寫這個。
	for(int t=0;t<n;t++){

		for(int i=0;  ;i++){
			gets( tree[i] );
			if(strcmp(tree[i],"")==0){
				N=i;//讀了幾行
				break;
			}
		}

		qsort( tree,N,32,compare);

		for(int i=0;i<N;i++){
			if(strcmp(tree[i],tree[i+1])!=0){
			//	c=d/N*b; 也可以寫這個。
				printf("%s %.4f\n",tree[i],100*b/(float)N);
				b=1;
			}
			else {
				b++;
			}
		}
	}
}
