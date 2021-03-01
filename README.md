# 2020cce-0056

#第1週實習課作業
##第一題:進階題：分式化簡
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	for(int i=2;i<=a;i++)
	{
		if(a%i==0&&b%i==0){
			c=i;
		}
	}	
	printf("%d %d\n",a/c,b/c);
}
```
##第二題:進階題：讀入整數反序列印
```C
#include <stdio.h>
int main()
{
	int a[10],n,b=0;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		if(n!=0){
			a[i]=n;
			b++;
		}
	}
	for( int i=b-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
##第三題:進階題：A的B次方函數
```C

```
##第四題:進階題：漸增數列相加
```C

```
##第五題:基礎題：找零錢
```C

```
##第六題:基礎題：因數個數
```C

```
##第七題:基礎題：找倍數
```C

```
##第八題:基礎題：整數轉換為等級 
```C

```
