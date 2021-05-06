#include <stdio.h>
int main()
{
	int n,a,temp;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		int c=0,b[50]={};
		scanf("%d",&a);
		for(int j=0;j<a;j++){
			scanf("%d",&b[j]);
		}
		for(int x=0;x<a;x++){
			for(int y=x+1;y<a;y++){
				if(b[x]>b[y]){
					temp=b[x];
					b[x]=b[y];
					b[y]=temp;
					c++;
				}
			}
		}

		printf("Optimal train swapping takes %d swaps.\n",c);

	}
}
