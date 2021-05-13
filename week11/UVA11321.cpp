#include <stdio.h>
int a[10000];
int main()
{
	int n,m,temp;
	while( scanf("%d%d",&n,&m)==2 ){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]%m>a[j]%m){
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				else if( a[i]%m==a[j]%m ){
					if( a[i]%2==0 && a[j]%2!=0 ){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					else if( a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					else if( a[i]%2==0 && a[j]%2==0 && a[i]>a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
		printf("%d %d\n",n,m);
		for(int i=0;i<n;i++){
			printf("%d\n",a[i]);
		}

	}
}
