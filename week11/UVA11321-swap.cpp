#include <stdio.h>
int a[10000];
int swap( int i, int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
 	return a[i],a[j];
}
int main()
{
	int n,m;
	while( scanf("%d%d",&n,&m)==2 ){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]%m>a[j]%m){ //�ƾl�ƶ���
					swap(i,j);
				}
				else if( a[i]%m==a[j]%m ){//�l�ƬۦP�ɡC
					if( a[i]%2==0 && a[j]%2!=0 ){//�_�ư��ƥ洫
						swap(i,j);
					}
					else if( a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]){ //�_�ƱƧǡA�j��p
						swap(i,j);
					}
					else if( a[i]%2==0 && a[j]%2==0 && a[i]>a[j]){ //���ƱƧǡA�p��j
						swap(i,j);
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
