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
	int n,N=0,b=1;//n�Ӥj���
	scanf("%d\n\n",&n);//����\n����Ū��
	//float c,d=100; �]�i�H�g�o�ӡC
	for(int t=0;t<n;t++){

		for(int i=0;  ;i++){
			gets( tree[i] );
			if(strcmp(tree[i],"")==0){
				N=i;//Ū�F�X��
				break;
			}
		}

		qsort( tree,N,32,compare);

		for(int i=0;i<N;i++){
			if(strcmp(tree[i],tree[i+1])!=0){
			//	c=d/N*b; �]�i�H�g�o�ӡC
				printf("%s %.4f\n",tree[i],100*b/(float)N);
				b=1;
			}
			else {
				b++;
			}
		}
	}
}
