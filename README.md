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
#include <stdio.h>
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
	//float c,d=100; 也可以寫這個來算數字。
	for(int t=0;t<n;t++){
	
		for(int i=0;  ;i++){
			gets( tree[i] );
			if(strcmp(tree[i],"")==0){
				N=i;//讀了幾行
				break;
			}	
		}
		
		qsort( tree,N,32,compare); //比較
	
		for(int i=0;i<N;i++){
			if(strcmp(tree[i],tree[i+1])!=0){
				//c=d/N*b; 也可以寫這個。
				printf("%s %.4f\n",tree[i],100*b/(float)N); 
				b=1;
				memset(tree[i],'\0',32);//做完一筆資料，將tree陣列歸零。
			}
			else {
				b++;
			}
		}
		if(t!=n-1)
			printf("\n");//多筆資料間要有換行
		
	}	
}
```
## 第十周正課
##  
## UVA10008-1 讀入三行(gets可以讀一整行
```c
#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		gets(line);
		printf("%s\n",line);
	}///scanf讀一的東西;gets讀一整行。
}
```
## UVA 10008-2 轉換大小寫
```c
#include <stdio.h>
char line[10000];
int ans[26];///出現次數
int main()
{
	int n;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		gets(line);
		
		for(int  k=0;line[k]!=0;k++){
			char c = line[k];
			//轉換大小寫
			if( c>='A' && c<='Z') printf("大");
			else if(c>='a' && c<='z')printf("小");
			else printf("他");
		}
	}///scanf讀一的東西;gets讀一整行。
	
}
```
## UVA 10008-3 統計字母數量
```c
#include <stdio.h>
char line[10000];
int ans[26];///放統計資料
int main()
{
	int n;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		gets(line);
		
		for(int  k=0;line[k]!=0;k++){
			char c = line[k];
			//轉換大小寫
			if( c>='A' && c<='Z') ans[c-'A']++;///計算字母有幾個,再放入ans[]裡統計。///c-'A'可以知道是哪個字母
			else if(c>='a' && c<='z') ans[c-'a']++;
			
		}
	}///scanf讀一的東西;gets讀一整行。
	
	for(int i=0;i<26;i++){
		printf("%c %d\n",'A'+i,ans[i] );
	}
}
```
## UVA 10008-4 字母與數字比較後 交換
```c
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
		for(int j=i+1;j<26;j++){//如果比較後數字小就交換，之後數字相同，但字母大的要在前面。
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
```
## UVA10008-5(好方法)
```c
#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct
{
	int ans;//int ans[26];
	char c; //char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}BOX;
BOX array[26];
int compare( const void *p1,const void *p2){
	if( ((BOX*)p1)->ans > ((BOX*)p2)->ans ) return -1;
	else if( ((BOX*)p1)->ans < ((BOX*)p2)->ans ) return +1;
	else if( ((BOX*)p1)->c > ((BOX*)p2)->c ) return +1;
	else if( ((BOX*)p1)->c < ((BOX*)p2)->c ) return -1;
	else return 0;//ans相等時，要比字母。
}
int main()
{
	for(int i=0;i<26;i++) array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		gets(line);
		for(int  k=0;line[k]!=0;k++){
			char c = line[k];
			if( c>='A' && c<='Z') array[c-'A'].ans++;///計算字母有幾個,再放入ans[]裡統計。
			else if(c>='a' && c<='z') array[c-'a'].ans++;	
		}
	}
	
	qsort( array,26,sizeof(BOX),compare);

	for(int i=0;i<26;i++){
		if(array[i].ans>0)printf("%c %d\n",array[i].c,array[i].ans );
	}
}
```
## 實習課
## 第一題 基礎題：計算餘數及列印 
```c
#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("The remainder is %d\n",x%y);
}
```
## 第二題 基礎題：判別正方形
```c
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:  ");
	scanf("%d%d",&a,&b);
	if(a==b){
		printf("It is a square ");
	}
	else {
		printf("It is not a square ");
	}
}
```
## 第三題 基礎題：將一連串整數相乘 
```c
#include <stdio.h>
int main()
{
	int n,a,ans=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter a value: "); 
		scanf("%d",&a);
		ans*=a;
	}
	printf("Product of the %d values is %d",n,ans); 
}
```
## 第四題 基礎題：平年月份的天數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if( n==4 || n==6 || n==9 || n==11 ){
		printf("30");
	}
	else if( n==2 ){
		printf("28");
	}
	else {
		printf("31");
	}
}
```
## 第五題 進階題：最大公因數gcd
```c
#include <stdio.h>
int main()
{
	int a,b,c=0;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,c);
}
```
## 第六題 進階題：字串長度
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[50],b[50],i=0;
	scanf("%s%s",a,b);
	
	if(strlen(a)>strlen(b)){
		printf("1");
	}
	else if(strlen(a)<strlen(b)){
		printf("-1");
	}
	else {
		printf("%d",strcmp(a,b));
	}
}
```
## 第七題 進階題：函數判斷質數
```c
#include <iostream>
using namespace std;
int prime(int n)
{
	for(int i=2;i*i<n;i++){
		if(n%i==0){   
			return 0;
		}
	}
	return 1;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```
## 第八題 進階題：判斷迴文
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[80],b=0;
	scanf("%s",a);
	for(int i=0;i<strlen(a)/2;i++){
		if(a[i]!=a[strlen(a)-1-i]){				
			b=1;
			printf("NO");
			break;
		}
	}
	if(b==0)printf("YES");
}
```
## 第11周正課
## 結構
```c
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar ;
uchar d;
int main()
{
    c ='A';
    d = c ;
    printf("%c",d);

}
```
## typedef運用
```c
#include <stdio.h>
typedef struct data{ //舊名 ，利用typedef貼上DATA新名
    char c;///字母
    int ans;///數字
}DATA;//新名
///struct data listA;
DATA listA;//變數

int main()
{
    listA.c = 'A';
    listA.ans=1;
    printf("%c %d\n",listA.c,listA.ans)

}
```
## 轉成整數的指標
```c
#include <stdio.h>
#include <stdlib.h>
int compare(const void *p1,const void *p2)
{        ///轉成"整數的指標"/望遠鏡,準星看到的整數
    int d1 = *( (int*)p1 );
    int d2 = *( (int*)p2 );
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]={4,8,3,7,5,2,9,1,6,10};
int main()
{
    qsort( a, 10, sizeof(int), compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
```
## UVA 10420 另外解法
```c
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{       ///轉成「字串的指標」
    char *s1 = (char*)p1;
    char *s2 = (char*)p2;
    if(strcmp(s1,s2)>0) return 1;
    if(strcmp(s1,s2)==0) return 0;
    if(strcmp(s1,s2)<0) return -1;
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}
	
	qsort( name, N, 80, compare );
	
	printf("%s ", name[0] );//開頭
	int ans=1;
	
	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//結尾		
			printf("%s ", name[i+1] );//新的開頭
			ans=1;
		}
	}
	printf("%d\n", ans );//結尾
}
```
## 正課格外題目 
## UVA299 Train Swapping 
```c
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
```
## 實習課
##第1題 基礎題：整數二元四則運算
```c
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+'){
		printf("%d",a+b);
	}
	else if(c=='-'){
		printf("%d",a-b);
	}
	else if(c=='*'){
		printf("%d",a*b);
	}
	else{
		printf("%d",a/b);
	}
}
```
##第2題 基礎題：幾日為星期幾 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",(n-1)%7);
}
```
##第3題 基礎題：零錢總額
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",50*a+5*b+c);
}
```
##第4題 基礎題：兩數平方差
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a*a-b*b);
}
```
##第5題 進階題：字串中的數字個數 
```c
#include <stdio.h>
#include <string.h>
int main()
{
	int n=0;
	char a[80];
	scanf("%s",a);
	for(int i=0;i<=strlen(a);i++){
		if(a[i]>='0' && a[i]<='9'){
			n++;
		}
	}
	printf("%d",n);
}
```
##第6題 進階題：利用自訂函式最大值max與最小值min求出兩者之差
```c
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int temp;
	if(c<d){
		temp=c;
		c=d;
		d=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	return a;
}
int min(int a,int b,int c,int d)
{
	int temp;
	if(c>d){
		temp=c;
		c=d;
		d=temp;
	}
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	return a;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```
##第7題 進階題：奇數之和 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2){
		ans+=i;
	}
	printf("%d",ans);
}
```
##第8題 進階題：兩數間可被7整除的數
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%7==0){
			printf("%d ",i);
		}
	}
}
```
## 第12周
## 上課內容
## 
```c

```
## 
```c

```
## 
```c

```
## 
```c

```
## 
```c

```
## 實習課
## 第1題 基礎題：剩餘啤酒有幾手又幾瓶
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",(a-(b*6))/6,(a-(b*6))%6);
}
```
## 第2題 基礎題：三數最小 
```c
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b<c){
		temp=c;
		c=b;
		b=temp;
	}
	printf("%d\n",c);
}
```
## 第3題 基礎題：計算立方值 
```c
#include <stdio.h>
int main()
{
	int n;
	for(int i=0;i<6;i++){
		scanf("%d",&n);
		printf("%d\n",n*n*n);
	}
}
```
## 第4題 基礎題：找千位數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>10000){
		n%=10000;
		printf("%d",n/1000);
	}
	else {
		printf("%d",n/1000);
	}
}
```
## 第5題 進階題：數字個數
```c
#include <stdio.h>
int main()
{
	int n,a=0;
	while(n){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		else {
			a++;
		}
	}
	printf("%d",a);
}
```
## 第6題 進階題：判斷平方數
```c
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(i*i==n){
			a=1;
			printf("%d",i);
			break;
		}
	}
	if(a==0)printf("0");
}
```
## 第7題 進階題：計算質數個數 
```c
#include <stdio.h>
int main()
{
	int a,b,n=0,c=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){	
		for(int j=2;j*j<=i;j++){		
			if(i%j==0){//不是質數
				c=1;
			}
		}
		if(c==0){
				n++;
		}
		c=0;
	}
	printf("%d",n);
}

```
## 第8題 進階題：三數組合
```c
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b<c){
		temp=c;
		c=b;
		b=temp;
	}
	printf("%d",a*100+b*10+c+1);
}
```
