# 2020cce-0056

# 第1週實習課作業
## 第一題:進階題：分式化簡
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
## 第二題:進階題：讀入整數反序列印
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
## 第三題:進階題：A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a,int b){
	int ans=a;
	for(int i=b-1;i>0;i--){
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 第四題:進階題：漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		ans+=(i-1)*i;
	}
	printf("%d\n",ans);
}
```
## 第五題:基礎題：找零錢
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5);
}
```
## 第六題:基礎題：因數個數
```C
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			a++;
		}
	}
	printf("%d\n",a);
}
```
## 第七題:基礎題：找倍數
```C
#include <stdio.h>
int main()
{
	int a[10],n=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%3==0){
			n++;
		}
	}
	printf("%d\n",n);
}
```
## 第八題:基礎題：整數轉換為等級 
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A\n");
	else if(n>=80)printf("B\n");
	else if(n>=60)printf("C\n");
	else printf("F\n");
	
}
```
# 第二周上課作業
## 使用指標
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p=&n1;   
    *p=200;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);
    return 0;
}
```
## 指標變換
```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    int *p=&n1;   
    *p=200;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);
    int *p2=&n3;  
    *p2=300;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);
    p2=p;         
    *p2=400;
    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);
    return 0;
}

```
## 陣列指標
```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);

    int *p=&n[0];   ///p1裡面，放的是n1的住址 &n1
    *p=200;
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);
    int *p2=&n[2];  ///p2裡面，放的是n3的住址 &n3
    *p2=300;
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);
    p2=p;         ///p2跑掉，改存p1裡面的東西
    *p2=400;
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);
    return 0;
}

```

# 第三周
## 實習課第三周作業
## 第1題 基礎題：整數間最大距離 
```C
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(b<a){
		temp=a;
		a=b;
		b=temp;
	}
	if(c<a){
		temp=c;
		c=a;
		a=temp;
	}
	if(c<b){
		temp=c;
		c=b;
		b=temp;
	}
	printf("%d\n",c-a);
}
```
## 第2題 基礎題：兩數間可被5整除的整數
```C
#include <stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d%d",&a,&b);
	if(b<a){
		temp=a;
		a=b;
		b=temp;
	}
	for(int i=a;i<=b;i++){
		if(i%5==0)printf("%d\n",i);
	}
}
```
## 第3題 基礎題：計程車資計算 
```C
#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	if(n<2000)printf("100\n");
	else if(n>2000){
		a=(n-2000)/500*5;
		if(n%500!=0)a+=5;
		printf("%d\n",a+100);
	}
}
```
## 第4題 基礎題：計算幾週與幾天 
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}
```
## 第5題 進階題：2進位轉10進位 
```C
#include <stdio.h>
int main()
{
	int n,ans=0,a=8;
	scanf("%d",&n);
	for(int i=1000;i>=1;i/=10){
		if(n/i!=0) ans+=a;
		a/=2;
		n%=i;
	}
	printf("%d\n",ans);
}
```
## 第6題 進階題：計算陣列的平方值
```C
#include <stdio.h>
int main()
{
	int n,a[10],b;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&b);
		a[i]=b*b;
		printf("%d,",a[i]);
	}
	printf("\n");
}
```
## 7題 進階題：漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		ans+=(i-1)*i;
	}
	printf("%d\n",ans);
}
```
## 第8題 進階題：大小寫轉換
```C
#include <stdio.h>
int main()
{
	char a[10];
	int b=0;
	scanf("%s", a);
	while(a[b])
	{
		if(a[b]>='a' && a[b]<='z'){
			a[b]-=32;
		}
		else if(a[b]>='A' && a[b]<='Z'){
			a[b]+=32;
		}
		b++;
	}
	printf("%s\n", a);
	
}
```
## 正課內容
## 1.指標宣告
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p= a[2];
    *p=222;

    p=p+2;
    *p=666;

    p--;
    *p=555;
}
```
## 2.指標宣告與使用不同
```C
#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printfAll()
{
    for(int i=0;i<10;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int *p= &a[2];
    *p=222;
            printfAll();
    int *p2= p+4;///«Å§i
    *p2=666;
            printfAll();
    p2--;      ///¨Ï¥Î
    *p2=555;
            printfAll();
    return 0;
}

```
## 3.malloc特殊用法，會使指標叫出空的陣列
```C
#include <stdio.h>
#include <stlib.h>
int a[10];
int main()
{
    int b[10];

    int  *p = ( int *) malloc ( sizeof( int )*10);
    return 0;
}
```
## 第四周作業
## 正課內容
## 1.結構宣告
```C
#include <stdio.h>
struct DATA{///宣告
    float x,y,z;///定義裡面有什麼
}
int main()
{

}
```
## 2.結構宣告使用

```C
#include <stdio.h>
struct DATA{///宣告
    float x,y,z;///定義裡面有什麼
} point1;///變數長得像DATA,而DATA裡有XYZ
int main()
{
    point1.x=3; ///使用
    point1.y=5; ///使用
    point1.z=7; ///使用
    printf("%f %f %f \n", point1.x, point1.y, point1.z);
}

```
## 3.資料結構
```C
#include <stdio.h>
struct DATA{///宣告
    float x,y,z;///定義裡面有什麼
} point1;///變數長得像DATA,而DATA裡有XYZ
struct DATA points[5];
int main()
{
    for(int i=0;i<5;i++){
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f \n", points[i].x, points[i].y, points[i].z);
    }
}

```
## 4.資料結構
```C
#include <stdio.h>
struct DATA{
    float x,y,z;
} a,b,c;
struct DATA points[5];
int main()
{
    struct DATA d,e,f;
    for(int i=0;i<5;i++){
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f \n", points[i].x, points[i].y, points[i].z);
    }
}
```
## 5.資料結構
```C
#include <stdio.h>
struct DATA{
    float x,y,z;
} a,b;
struct DATA c,d;
int main()
{
    struct DATA e;
    struct DATA f={ 1, 2, 3};
    printf("%f %f %f\n", a.x, a.y, a.z);
    printf("%f %f %f\n", b.x, b.y, b.z);
    printf("%f %f %f\n", c.x, c.y, c.z);
    printf("%f %f %f\n", d.x, d.y, d.z);
    printf("%f %f %f\n", e.x, e.y, e.z);
    printf("%f %f %f\n", f.x, f.y, f.z);
}
```
## 實習課作業
## 第1題 基礎題：分開整數的每個數字 
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/10000);
	n%=10000;
	for(int i=1000;i>=1;i/=10){
		printf("   ");
		printf("%d",n/i);
		n%=i;
	}
	
}
```
## 第2題 基礎題：字元判別 
```C
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(	a>='A' && a<='Z' ){
		printf("U");
	}
	else if( a>='a' && a<='z' ){
		printf("L");
	}
	else if( a>='0' && a<='9' ){
		printf("D");
	}
	else {
		printf("O");
	}
}
```
## 第3題 基礎題：數字之首 
```C
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n/10!=0){
		n/=10;
	}
	printf("%d",n);
}
```
## 第4題 基礎題：輸出從0到N的偶數 
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i+=2){
		printf("%d ",i);
	}
}
```
## 第5題 進階題：除惡務盡 
```C
#include <stdio.h>
int main()
{
	char a[100],i=0;
	scanf("%s",&a);
	while(a[i]!=0){
		if(a[i]!='2')printf("%c",a[i]);
		i++;
	}
	printf("\n");
}
```
## 第6題 進階題：擲骰統計
```C
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
```
## 第7題 進階題：函數找整數的最大數字
```C
#include <stdio.h>
int max_digit(int n){
	int a=0;
	while(n){
		if(n%10>a) a=n%10;
		n/=10;
	}
	return a;
}
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}

```
## 第8題 進階題：星星等腰三角 
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=i;k<n;k++){
			printf(" ");
		}
		for(int p=1;p<=2*i-1;p++){
			printf("*");
		}
		printf("\n");
	}
}
```
## 第5周
## 正課內容
## 01.字串
```c
#include <stdio.h>
char line[20]="233233233233233233233";
int main()
{
    char *p= line;
    for(int i=0;line[i]!=0;i++){
            p=&line [i];
            char c = line[i];
            if(c!='2')printf("%c",c);
    }
    printf("\n");
}
```
## 02.字串宣告方式
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line );
    printf("%s\n",line2 );
}
```
## 03.字串使用的問題
```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line );
    printf("%s\n",line2 );

    char line3[]="majority這是好的，要多長就多長啦";
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line3);

    printf("你相信嗎?這是line4:==%s==\n",line4);///錯亂了
}
```
## 04.字串2維陣列
```c
#include <stdio.h>
int main()
{
	  ///左  右
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    for(int i=0;i<5;i++){
            printf("%s\n",line[i]);
    }
}
```
## 05. 2維陣列
```c
#include <stdio.h>
int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
int main()
{
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
## 06.字串排序題目:又又又是絕望的一天
```c
#include <stdio.h>
#include <string.h>
char line[100][10];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&line[i]);
	}
	
	char temp[10];
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if( strcmp (line[i],line[j])>0 ){
				strcpy( temp, line[i]);
				strcpy( line[i], line[j]);
				strcpy( line[j],temp);
			}
		}	
	}
	
	for(int i=0; i<n; i++){
		printf("%s\n",line[i]);
	}
}
```
## 實習課
## 第1題 基礎題：N數之和 
```c
#include <stdio.h>
int main()
{
	int n,a,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		ans+=a;
	}
	printf("%d\n",ans);
}
```
## 第2題 基礎題：三數極大 
```c
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a){
		temp=b;
		b=a;
		a=temp;
	}
	if(c>a){
		temp=c;
		c=a;
		a=temp;
	}
	if(c>b){
		temp=c;
		c=b;
		b=temp;
	}
	printf("%d\n",a);
}
```
## 第3題 基礎題：計算商數 
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```
## 第4題 進階題：反序數字
```c
#include <stdio.h>
int main()
{
	int n,a=0,b;
	scanf("%d",&n);
	b=n;
	while(n!=0){
		a=a*10+(n%10);
		n/=10;
	}
	printf("%d+%d=%d\n",b,a,a+b);
}
```
## 第5題 進階題：絕對值函數
```c
#include <stdio.h>
int f(int n)
{
	if(n>0){
		return n;
	}
	else{
		return -n;
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
## 第七週作業
## 快速排序 qsort
```c
#include <string.h>
#include <stdlib.h>
char a[100][10];
int compare( const void *p1,const void *p2)
{
	char *s1=( char* )p1;
	char *s2=( char* )p2;
	return strcmp( s1 , s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	
	qsort(  a,     n,     10,       compare);
//快速排序(陣列, n個,每個有多大 ,比較的函式);
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
}
```
## UVA10420
```c
#include <string.h>
#include <stdlib.h>
char a[2000][75];
int compare( const void *p1,const void *p2){
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
char others[100];
int main()
{
	int n,ans=1;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s", a[i]);
		gets(others);
	}
	
	qsort( a, n, 75, compare);
	
	for(int i=0;i<n;i++){
			if(strcmp(a[i],a[i+1])!=0){
				printf("%s %d\n",a[i],ans);
				ans=1;
			}
			else {
				ans++;
			}
		
	}
}
```
## 第八周
##正課 10226 hardwood 
```C
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
				memset(tree[i],'\0',32);
			}
			else {
				b++;
			}
		}
		if(t!=n-1)
			printf("\n");
		
	}	
}
```
