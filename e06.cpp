#include <stdio.h>
int main()
{
	char a[100],i=0,b=0,c=0,d=0,e=0,f=0,g=0;
	scanf("%s",&a);
	while( a[i]!=0 ){
		if(a[i]=='1') b++;
		else if(a[i]=='2')c++;
		else if(a[i]=='3')d++;
		else if(a[i]=='4')e++;
		else if(a[i]=='5')f++;
		else if(a[i]=='6')g++;
		i++;
	}
	printf("1:%d\n",b);
	printf("2:%d\n",c);
	printf("3:%d\n",d);
	printf("4:%d\n",e);
	printf("5:%d\n",f);
	printf("6:%d\n",g);
}
