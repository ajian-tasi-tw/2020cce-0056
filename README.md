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
## UVA 10062 Tell me the frequencies! 
```c
#include <stdio.h>
char line[2000];
int main()
{	
	for(int t=0;gets(line);t++){
		int ans[256]={};
		char ascii[256];
		for(int i=0;i<256;i++) ascii[i]=i;
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
				if( ans[i]==ans[j] &&  ascii[i]<ascii[j] ){
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;	
				}
			}
		}
		if(t>0)printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0)printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}
```
## UVA229 老師解法Train Swapping 
```c
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d", &T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		
		int ans=0;///統計交換了幾次
		for(int k=0;k<N-1;k++){   ///泡泡排序法
			for(int i=0;i<N-1;i++){ ///N-1可以加快
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
## UVA11321
```c
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
				if(a[i]%m>a[j]%m){//排餘數順序
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				else if( a[i]%m==a[j]%m ){ //餘數相同時。
					if( a[i]%2==0 && a[j]%2!=0 ){ //奇數偶數交換
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					else if( a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]){  //奇數排序，大到小
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					else if( a[i]%2==0 && a[j]%2==0 && a[i]>a[j]){ //偶數排序，小到大
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
```
## UVA11321 函示縮減法
```c
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
				if(a[i]%m>a[j]%m){ //排餘數順序
					swap(i,j);
				}
				else if( a[i]%m==a[j]%m ){//餘數相同時。
					if( a[i]%2==0 && a[j]%2!=0 ){//奇數偶數交換
						swap(i,j);
					}
					else if( a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]){ //奇數排序，大到小
						swap(i,j);
					}
					else if( a[i]%2==0 && a[j]%2==0 && a[i]>a[j]){ //偶數排序，小到大
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
## 第13周
## 正課
## 互動設計-1 size 調視窗大小
```c
size(1024,400); //視窗大小
background( 137 , 255 , 226 );//背景顏色
```
## 互動設計-2 用滑鼠互動用 mousePressed
```c
 void setup(){//互動，只做一次 
   size(1024,400);
 }
 void draw(){//互動版本，每秒畫60次
   if(mousePressed)background( 137 , 255 , 226 );//按下去時
   else background(255 ,0 ,255);//否則 是這個顏色
 }
```
## 互動設計-3 當案移下時，數字會增加
```c
void setup(){//互動，只做一次
  size(1024,400);
}
void draw(){//互動版本，每秒畫60次
  if(mousePressed)  background( 137 , 255 , 226 );//按下去時
  else background(255 ,0 ,255);//否則 是這個顏色
  text(a,512 ,200);//畫出文字 ///text的第一格是要秀出的參數
}
int a=0;
void mousePressed(){//當按一下
   a++;
}
```
## 互動設計-4 文字加法、文字調自型
```c
void setup(){
  size(1024,400);
}
void draw(){
  if(mousePressed)  background( 137 , 255 , 226 );
  else background(255 ,0 ,255);
  textSize(55);//文字的大小可以改
  text("沒中文Now is:"+ a ,212 ,200);//畫出文字 
      // + 文字加法會將文字跟數字加在一起(新東西)
}
int a=0;
void mousePressed(){//當按一下
   a++;
}
```
## 互動設計-5 寫時鐘
```c
void setup(){
  size(1024,400); 
}
void draw(){
  background( #8C61B2 );//色碼
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23 //參考文件可以找到
  textSize(55);
  text( h + " : " + m + " : " + s ,100,200);
    //數字+ 字串  數字 + 字串 數字
    // 等於字串    等於字串
}
```
## 互動設計-6 
```c
void setup(){
  size(1024,400); 
  textFont( createFont("標楷體", 80));///顯示中文
}
void draw(){//因為系統會每秒更新，所以才會增加
  background( #8C61B2 );//色碼
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23 ///參考文件可以找到
  textSize(55);
  text( h + " : " + m + " : " + s ,100,200);
    //數字+ 字串  數字 + 字串 數字
    // 等於字串    等於字串
  int total = s + 60*m + 60*60*h; ///目標總秒數
  int closeH=17 ,closeM=40,closeS=0;///結束的精確時間
  int total2= closeS + 60*closeM + 60*60*closeH; ///目標總秒數
  int ans = total2-total;
  text("剩下幾秒:" + ans,100,100);
}
```
## 互動設計-7 最後計算時間
```c
void setup(){
  size(1024,400); 
  textFont( createFont("標楷體", 80));///顯示中文
}
void draw(){//因為系統會每秒更新，所以才會增加
  background( #8C61B2 );//色碼
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23 ///參考文件可以找到
  textSize(55);
  text( h + " : " + m + " : " + s ,100,200);
    //數字+ 字串  數字 + 字串 數字
    // 等於字串    等於字串
  int total = s + 60*m + 60*60*h; ///目標總秒數
  int closeH=17 ,closeM=40,closeS=0;///結束的精確時間
  int total2= closeS + 60*closeM + 60*60*closeH; ///目標總秒數
  int ans = total2-total;
  text("剩下幾秒:" + ans,100,100);
  int ansH=ans/60/60%60,ansM=ans/60%60 ,ansS=ans%60;//剩下時間運算
  text( ansH + " : " + ansM + " : " + ansS ,100,300);//剩下時間
}
```
## 實習課
## 第1題 基礎題：正整數平方總和 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		ans+=i*i;
	}
	printf("%d",ans);
}
```
## 第2題 基礎題：判斷座標的象限 
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>0){
		if(b>0){
			printf("1\n");
		}
		else if(b<0){
			printf("4\n");
		}
	}
	if(a<0){
		if(b>0){
			printf("2\n");
		}
		else if(b<0){
			printf("3\n");
		}
	}
}
```
## 第3題 基礎題：輸入n (n>0)， 求n之所有因數和
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int  i=1;i<=n;i++){
		if(n%i==0){
			ans+=i;
		}
	}
	printf("%d",ans);
}
```
## 第4題 進階題：求11 +22+33+…+nn。 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans+=11*i;
	}
	printf("%d",ans);
}

```
## 第5題 進階題：求兩數之最大公因數
```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
	int c=0;
	for(int i=1;i<a;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	return c;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;

```
## 第6題 進階題：區間測速-超速之王 
```c
#include <stdio.h>
int main()
{
	int a,b=9999, c;
	for(int i=0;i<10;i++){
		scanf("%d",&a);
		if(a<b){
			b=a,c=i+1;
		}
	}
	printf("%d %d",c,4320/b);	
}
```
## 第7題 進階題：10數排序，從大到小排好
```c
#include <stdio.h>
int main()
{
	int a[10],temp;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
```
## 第8題 進階題：兩數之間的3倍數總和
```c
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	while(a%3!=0){
		a++;
	}
	while(b%3!=0){
		b--;
	}
	for(int i=a;i<=b;i+=3){
		ans+=i;
	}
	printf("%d",ans);
}
```

## 第14周
## 正課
## 1-random 隨意抽一個數字
```c
//可以再有色彩的文字後面，按右鍵可以查程式在幹嘛
void setup(){//只做一次
  float ans=random(60);  ///亂數，會是<60的福點數
  text(ans ,20,20);///畫出ans
}
void draw(){
  
}
```
## 2-當按一次就能產生亂碼(互動)
```c
int ans=0;
void setup(){
  size(300,300);
  textSize(30);
  text(ans ,20,20);///畫出ans
}
void draw(){
  background(#62E3C8);
  text( ans,20,30);
}
void mousePressed(){//按一次就互動
  ans = (int)random(60);///浮點數不能直接變整數
      //改整數
}
```
## 3-洗牌功能
```c
//int a[]={1,2,3,4,5,6,7,8,9,10}; C語言
int []a = {1,2,3,4,5,6,7,8,9,10};///java陣列
int i1,i2;
void setup(){
   size(400,100); 
   textSize(30);
}
void draw(){
  background(#62E3C8);
  for(int i=0;i<10;i++){
     text(a[i], i*40,50); 
  }
  rect(i1*40,50,30,30);///i1方塊
  rect(i2*40,50,30,30);///i2方塊
}
void mousePressed(){//當按一下就交換
   i1=(int)random(10); //亂數選一個值
   i2=(int)random(10); //亂數選一個值
   int temp=a[i1];a[i1]=a[i2]; a[i2]=temp;//交換
}
```
## 4-大樂透洗牌
```c
int []a=new int[47];//java陣列
void setup(){
   size(500,200);
   textSize(30);
   for(int i=0;i<47;i++){
     a[i]=i; 
   }
   //讓a[i]的陣列裡，要先訪整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);
     int i2=(int)random(47);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }//作弊，先洗好牌，先知道號碼，等等掉出
}
void draw(){
   background(#62E3B9);
  for(int i=0;i<5;i++){
     text(a[i], i*80, 100); 
  }
}
```
## 5-使球一顆一顆掉出來
```c
int []a=new int[47];//java陣列
void setup(){
   size(500,200);
   textSize(30);
   for(int i=0;i<47;i++){
     a[i]=i; 
   }
   //讓a[i]的陣列裡，要先訪整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);
     int i2=(int)random(47);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }//作弊，先洗好牌，先知道號碼，等等掉出
}
int n=0;
void draw(){
   background(#62E3B9);
  for(int i=0;i<n;i++){
     text(a[i], i*80, 100); 
  }
}
void mousePressed(){//按一下，讓數字依序出現
   n++; 
}
```
## 6-文字對齊、加球、改色
```c
int []a=new int[47];//java陣列
void setup(){
   size(500,200);
   textSize(30);
   for(int i=0;i<47;i++){
     a[i]=i; 
   }
   //讓a[i]的陣列裡，要先訪整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);
     int i2=(int)random(47);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }//作弊，先洗好牌，先知道號碼，等等掉出
}
int n=0;
void draw(){
  background(#62E3B9);
  textAlign(CENTER,CENTER);///文字對齊:中，中
  for(int i=0;i<n;i++){
     fill(255);ellipse(   i*80+40, 100, 55, 55);//ellipse是圓形
     fill(0);text(a[i], i*80+40, 100); //fill填顏色
                     //兩個相隔 /高度    
  }
}
void mousePressed(){//按一下，讓數字依序出現
   n++; 
}
```
## 補充 滾動
```c
int []a=new int[47];//java陣列
void setup(){
   size(500,200);
   textSize(30);
   for(int i=0;i<47;i++){
     a[i]=i; 
   }
   //讓a[i]的陣列裡，要先訪整齊對應的數字
   for(int i=0;i<1000;i++){
     int i1=(int)random(47);
     int i2=(int)random(47);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }//作弊，先洗好牌，先知道號碼，等等掉出
}
int n=0,rolling=0;
void draw(){
  background(#62E3B9);
  textAlign(CENTER,CENTER);///文字對齊:中，中
  for(int i=0;i<n;i++){
    int x=i*80+40;
    if(i==n-1 && rolling>0) {
      x+=rolling;
      rolling-=3; 
    }
    fill(255);ellipse(   x, 100, 55, 55);//ellipse是圓形
    fill(125);text(a[i], x+2, 100+2); 
    fill(0);  text(a[i], x, 100);//fill填顏色
                     //兩個相隔 /高度    
  }
}
void mousePressed(){//按一下，讓數字依序出現
   rolling = 500;
   n++; 
}
```

## 實習課
## 第1題 基礎題：大位王 
```c
#include <stdio.h>
int main()
{
	int n,a=10;
	scanf("%d",&n);
	while(n/a!=0){
		n=n/10;
	}
	if(n>=0){
		printf("%d\n",n);
	}
	else{
		printf("%d\n",-n);
	}
}

```
## 第2題 基礎題：輸入西元y年，判斷該y年是否為閏年
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if( n%100==0 && n%400!=0){
		printf("%d is not a leap year\n",n); 
	}
	else if( n%4==0 && n%100!=0 ){
		printf("%d is a leap year.\n",n);
	}
	else {
		printf("%d is not a leap year.\n",n);
	}
}
```
## 第3題 基礎題：把數字倒著印出來
```c
#include <stdio.h>
int a[10];
int main()
{
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}
```
## 第4題 基礎題：區間測速
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",4320/n);
}

```
## 第5題 進階題：奇數反流
```c
#include <stdio.h>
int a[10];
int main()
{
	int n,b,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&b);
		if(b%2!=0){
			a[c]=b;
			c++;
		}
	}
	for(int i=c-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
```




## 第15周
## 正課
## 1-複習
```c
void setup(){//設定只做一次
   size(400,200); 
}
void draw(){//畫圖每秒60
    int s = second();//0..59秒
    if( s%2==0) background(#FFF981);
    else background(#8BFF81);
}
```
## 2-倒數計時
```c
void setup(){
  size(400,200);
  textSize(40);//放大字
}
void draw(){
   int s = second();//1->59
   background(#8BFF81);
 ///  text( 59-s ,100 ,100);
 ///59-增加的數會減少
   text( 10- s%11 ,100 ,100);
}//10~0有11個數字(就會倒數到0)
  
```
## 3-去libary安裝音樂外掛，並加入進去，當按一下時會有聲音
```c
import processing.sound.*;//(加入)
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"tada.mp3");//把檔案拉近來，放聲音
}
void draw(){
  background(#8BFF81);
}
void mousePressed(){//按一下就會有聲音
   player.play(); 
}
```
## 4-可暫停/或是開始音樂
```c
import processing.sound.*;//(加入)
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");//把檔案拉近來，放聲音
}
void draw(){
  background(#8BFF81);
}
void mousePressed(){///可暫停/或是開始音樂
  if( player.isPlaying() ){
     player.stop(); 
  }else{
    player.play();
  }
}

///ctrl+k可以叫出此檔案資料夾
```
## 5-數字倒數到0時放聲音，且不會多太多聲音(將第二步跟第四步合在一起)
```c
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//放大字
  player = new SoundFile(this, "tada.mp3");
}
void draw(){//每秒60次
   int s = second();//1->59
   background(#8BFF81);
 ///  text( 59-s ,100 ,100);
 ///59-增加的數會減少
   text( 10- s%11 ,100 ,100);
   if( 10-s%11 == 0 && !player.isPlaying()){
      player.play();    //只會播放一個聲音
   }
}//10~0有11個數字(就會倒數到0)

```
## 6-做成web。Processing to p5.js converter，可把java語言轉乘P5(要注意大括號要加)
```c
function setup(){//設定只做一次
   createCanvas(400,200); 
}
function draw(){//畫圖每秒60
    let s = second();//0..59秒
    if( s%2==0) {
      background(49,45,50);
    }
    else{
      background(58,114,0);
    }
}

///網路搜尋Processing to p5.js converter，可把java語言轉乘P5
```


## 實習課
## 第1題 基礎題：水杯接水
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%b==0){
		printf("%d",a/b);
	}
	else{
		printf("%d",(a/b)+1);
	}
}
```
## 第2題 基礎題：平面兩座標的面積 
```c
#include <stdio.h>
int main()
{
	int x1,y1,x2,y2,temp;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	if(x1<x2){
		temp=x1;
		x1=x2;
		x2=temp;
	}
	if(y1<y2){
		temp=y1;
		y1=y2;
		y2=temp;
	}
	printf("%d",(x1-x2)*(y1-y2));
}
```
## 第3題 基礎題：整數向量相加
```c
#include <stdio.h>
int main()
{
	int n,a[10],b[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]+b[i]);
	}
}
```
## 第4題 進階題：億萬富翁
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[16];
	int i=0,n=0;  
	scanf("%s",a);
	n=strlen(a);
	while(n){
		printf("%c",a[i]);
		i++;
		n--;
		if(n%3==0 && n/3!=0) printf(",");
	}
}

```
## 第5題 進階題：秒數換算
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%02d:%02d:%02d",n/3600,n%3600/60,n%60);
}
```



## 第16周
## 正課
## 1-ellipse可以畫圓
```c
void setup(){//設定
   size(400,200); 
}
void draw(){//每秒畫60次
  background(#FFD26F);
  ellipse( 50 ,50 ,80 ,80);//畫圓
  ///       圓心,  寬  高
}
```
## 2-arc( 圓心,圓心,寬,高,開始,結束(角度)) 可畫出圓弧;mouseX可以追蹤滑鼠
```c
void setup(){//設定
   size(400,200); 
}
void draw(){//每秒畫60次
  background(#FFD26F);
  fill(255);//叫出顏色
  ellipse( 50 ,50 ,80 ,80);//畫圓
  ///       圓心,  寬  高
  fill(255,0,0);///紅色
  float stop=mouseX/50.0;//跟滑鼠動
  text( stop ,100 ,100);//產生滑鼠弧度數字
  arc( 50, 50, 80, 80,  0,  stop );///畫圓弧
  //    圓心   寬  高 開始  結束(角度)
  //對arc按右鍵找參考資料可以知道他如何使用。
}
```
## 3-變成細長的線，弧度使用
```c
void setup(){//設定
   size(400,200); 
}
void draw(){//每秒畫60次
  background(#FFD26F);
  fill(255);//白色
  ellipse( 50 ,50 ,80 ,80);//畫圓
  ///       圓心,  寬  高
  fill(#488BD1);///藍色
  float start=mouseX/50.0;
  textSize(50);
  text(start ,100,100);
  arc( 50, 50, 80, 80,  0+start,  0.1+start);///畫圓弧
  ///   圓心   寬  高      開始   結束(弧度)(前面小數點，可以調整圓弧的大小)
  //對arc按右鍵找參考資料可以知道他如何使用。
}
```
## 4-分出轉盤的24個位置(2PI是一個圓的角度，電腦用pi)
```c
void setup(){//設定
   size(400,300); 
}
void draw(){//每秒畫60次
  background(#FFD26F);
  fill(255);//白色
  ellipse( 100 ,100 ,180 ,180);//畫圓，做出外圈。
  ///   圓心 X , Y,   寬  高
  fill(#488BD1);///藍色
  float start=mouseX/50.0;
  for(int i=0;i<24;i++){///分顏色
     float shift=2*PI*i/24.0;///2PI是一個圓的角度;寫點零是怕出錯
     if(i%3==0) fill(100);///利用餘數知道顏色擺哪，每一個角度一個顏色
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///畫圓弧
                                                   //半圓 PI/12其實跟2*PI/24一樣
  }
}
```
## 5-if(i==0)可以設置一個中獎點
```c
void setup(){//設定
   size(400,300); 
}
void draw(){//每秒畫60次
  background(#FFD26F);
  fill(255);//白色
  ellipse( 100 ,100 ,180 ,180);//畫圓，做出外圈。
  ///   圓心 X , Y,   寬  高
  fill(#488BD1);///藍色
  float start=mouseX/50.0;
  for(int i=0;i<24;i++){///分顏色
     float shift=2*PI*i/24.0;///2PI是一個圓的角度;寫點零是怕出錯
     if(i%3==0) fill(100);///利用餘數知道顏色擺哪，每一個角度一個顏色
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///設定這個一塊是中獎點
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///畫圓弧
                                                   //半圓 PI/12其實跟2*PI/24一樣
  }
}
```
## 6-讓圓自動旋轉和停止
```c
void setup(){//設定
   size(400,300); 
}
float start=0;///開始秒數
void draw(){//每秒畫60次
  background(#FFD26F);
  if(start<10) start+=0.01;///數到10就停  //取代float start=mouseX/50.0;
  fill(255);text( start ,200,150);
  for(int i=0;i<24;i++){///分顏色
     float shift=2*PI*i/24.0;///2PI是一個圓的角度;寫點零是怕出錯
     if(i%3==0) fill(100);///利用餘數知道顏色擺哪，每一個角度一個顏色
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///設定這個一塊是中獎點
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///畫圓弧
                                                   //半圓 PI/12其實跟2*PI/24一樣
  }
}

```
## 7-使速度慢慢變慢，直到停止為止
```c
void setup(){
   size(400,250); 
}
float start=0  ,v=0.07;///開始秒數，v是旋轉的速度
void draw(){
  background(#FFD26F);
  if(v>0.001){///當速度大於0.01就會轉動
    start+=v;///位置、速度、加速度(位置會+速度)
    v*=0.99;///摩擦力會讓速度變慢(速度會+加速度)
  }///改寫if(start<10) start+=0.05;///數到10就停//取代float start=mouseX/50.0;
  fill(0);text( start ,200,150);textSize(30);
  text(v, 200,180);
  for(int i=0;i<24;i++){
     float shift=2*PI*i/24.0;
     if(i%3==0) fill(100);
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);/
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);
  }
}
```
## 8-讓每次轉動都是不同結果(使用random可以輸入亂數，決定一開始轉動的速度)
```c
void setup(){
   size(400,250); 
}
float start=0  ,v;///開始秒數///v是旋轉的速度
void mousePressed(){
  v= random(1); ///亂數取一個數字
}
void draw(){
  background(#FFD26F);
  if(v>0.001){///當速度大於0.01就會轉動
    start+=v;///位置、速度、加速度(位置會+速度)
    v*=0.99;///摩擦力會讓速度變慢(速度會+加速度)
  }///改寫if(start<10) start+=0.05;///數到10就停//取代float start=mouseX/50.0;
  fill(0);text( start ,200,150);textSize(30);
  text(v, 200,180);
  for(int i=0;i<24;i++){
     float shift=2*PI*i/24.0;///2PI是一個圓的角度;寫點零是怕出錯
     if(i%3==0) fill(100);
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///設定這個一塊是中獎點
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///畫圓弧
  }
}
```
## 9-加上推推樂!!(rect是畫出方塊)
```c
void setup(){
   size(400,260); 
}
float start=0  , v=0,  x=0;///開始秒數///v是旋轉的速度，X是給方塊使用的
void mousePressed(){
  v= random(1); ///亂數取一個數字
}
void draw(){
  background(#FFD26F);
  if(v>0.001){///當速度大於0.01就會轉動
    start+=v;///位置、速度、加速度(位置會+速度)
    v*=0.99;///摩擦力會讓速度變慢(速度會+加速度)
    x +=v*2;  
  }  ///改寫if(start<10) start+=0.05;///數到10就停//取代float start=mouseX/50.0;
  rect(x,200, 50,50);///推推樂方塊
  fill(0);text( start ,200,150);textSize(30);
  text(v, 200,180);
  for(int i=0;i<24;i++){
     float shift=2*PI*i/24.0;///2PI是一個圓的角度;寫點零是怕出錯
     if(i%3==0) fill(100);
     if(i%3==1) fill(#FFF755);
     if(i%3==2) fill(255);
     if(i==0)   fill(#FA6A53);///設定這個一塊是中獎點
     arc( 100, 100, 180, 180,  shift+0+start,  shift+PI/12.0+start);///畫圓弧
  }
}
```
## 實習課
## 第1題 進階題：大於漸增數列總和之最小整數
```c
#include <stdio.h>
int main()
{
	int k,n=1,ans=0;
	scanf("%d",&k);
	while(ans<=k){
		ans+=n;
		n++;
	}
	printf("%d",n-1);
}
```
## 第2題 進階題：計算級數的值
```c
#include <stdio.h>
int main()
{
	int n,ans=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans=ans+(2*i+1);
	}
	printf("f(%d)=%d",n,ans);
}
```
## 第3題 進階題：拆解輸入的正整數
```c
#include <stdio.h>
int main()
{
	int n,i=10;
	scanf("%d",&n);
	while(n!=0){
		printf("%d ",n%i);
		n-=(n%i);
		i*=10;
	}
}
```
## 第4題 基礎題：計算一組任意數目的整數的總和
```c
#include <stdio.h>
int main()
{
	int a[50],i=0,b,ans=0;
	while(b){
		scanf("%d",&b);
		if(b!=0){
			a[i]=b;
			i++;
		}
	}
	for(int j=0;j<i;j++){
		if(a[j]>0){
			ans+=a[j];
		}
	}
	printf("%d",ans);
}
```
## 第5題 基礎題：整數最大值、最小值
```c
#include <stdio.h>
int a[50];
int main()
{
	int b,n=0,temp;
	while(b){
		scanf("%d",&b);
		if(b!=0){
			a[n]=b;
			n++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("[%d,%d]",a[0],a[n-1]);	
}
```

## 第17周
## 正課(主題:打字遊戲)
## 1-利用變數印出字串 (String宣告字串)
```c
void setup(){
  size(400,300);
  textSize(45);
}
String line="Hello";//變數字串(P語言的)
void draw(){
   background(#8CFF6A);
   text( line ,100 ,100);///方法1:將字串印出來
   text("world",100,150);///方法2:也可以這樣做
}
```
## 2-+的運用與key的運用
```c
void setup(){
  size(400,300);
  textSize(45);
}
String line="Hello";//變數字串(P語言的)
char c='9';//字母
void draw(){
   background(#8CFF6A);
   text( line+c+100 ,100 ,100);
   text("world:"+key+key,100,150);
}///字串的+是接起來!!!
 ///key對應你最後按下的鍵盤字母or數字or符號
```
## 3-判斷是否一樣
```c
void setup(){
 size(400,200);
 textSize(40);
}
char c='9';//題目
int win=0;
void draw(){
  background(#8CFF6A);
  text("Press:"+c,100 ,100);
  text("You  :"+key,100,150);
  if( c==key ) win=1;//當win=1就贏了
  else win=0;
  if(win==1) text("You Win",100,50);
}
```
## 4-答對時換題目charAt(i)可以更換原本字串的數值
```c
void setup(){
 size(400,200);
 textSize(40);
}
char c='9';//題目
String ans="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
///java字串
int win=0;
void draw(){
  background(#8CFF6A);
  text("Press:"+c,100 ,100);
  text("You  :"+key,100,150);
  if( c==key ) win=1;//當win=1就贏了
  else win=0;
  
  if(win==1) {
    text("You Win",100,50);
    int i = int(random(26+26));//亂數0~52之間決定一個整數
    c= ans.charAt(i); //找出字串ans第i個字母
  }
}
```
## 5-keyCode可偵測上下左右鍵(往上是減)
```c
void setup(){
  size(400,300);
  textSize(45);
}
int x=100,y=100;
void draw(){
 background(#8CFF6A);
 rect(x,y,50,50);//畫方塊
}//左右鍵
void keyPressed(){
  if( keyCode == LEFT ) x-=10;
  if( keyCode == RIGHT ) x+=10;
  if( keyCode == UP ) y-=10;
  if( keyCode == DOWN ) y+=10;
}
///keyCode是特殊鍵(上下左右等等)
///key是普通鍵(數字字母符號等)
///mousePressed()是偵測滑鼠、keyPressed()是偵測鍵盤
```
## 6-使他跑的順
```c
void setup(){
  size(400,300);
  textSize(45);
}
float x=100,y=100,vx=0,vy=0;
void draw(){
 background(#8CFF6A);
 rect(x,y,50,50);//畫方塊
 x +=vx;//每秒60次，等速(順)
}
void keyPressed(){
  if( keyCode == LEFT ) vx=-10;
  if( keyCode == RIGHT ) vx=+10;
}
void keyReleased(){
 vx =0;
}
```
## 7-整合上面做出打字遊戲-1
```c
String A="mother";//題目
String line="";//輸入答案的地方一開始沒有東西

void setup(){
 size(400,300);
 textSize(40);
}
void draw(){
  background(#1B57A5);
  text(A, 100,100);///秀出題目
  text(line+"|",100,150);///秀出答案
}
void keyPressed(){
 line = line +key; ///這樣就能打一串字
}
```
## 8-加入倒退鍵(利用length()看長度substring()選擇刪除長度)
```c
void setup(){
 size(400,300);
 textSize(40);
}
void draw(){
  background(#1B57A5);
  text(A, 100,100);///秀出題目
  text(line+"|",100,150);///秀出答案
}
void keyPressed(){
  int len = line.length();//原字的長度
  if( key>='a' && key<='z') line = line + key;//小寫
  if( key>='A' && key<='Z') line = line + key;//大寫
  if( key==ENTER ) { }//比對是否正確
  //key有空白鍵、ENTER鍵、倒退鍵等
  if( key== BACKSPACE && len>0 ) line = line.substring(0,len-1);//刪除字母
 ///substring能找一中一個字母
}
```

## 第18周
## 正課 開啟視訊鏡頭
## 如何開啟視訊鏡頭
```c
import processing.video.*; ///加入外掛要用import
Capture cam;///global變數
void setup(){
  size(640,480); 
  println( Capture.list() ); //把所有鏡頭放進來
  cam = new Capture(this, "鏡頭" );///開啟視訊鏡頭 
  cam.start();//開啟鏡頭
}
void draw(){
  if( cam.available() ) cam.read();
  set(0,0,cam) ;//也可以用image但會比較慢
}
```
## 開影片檔
```c
import processing.video.*;
Movie movie;

void setup(){
   size(640,480);
   movie = new Movie(this, " .mov");//找出影片檔
   movie.play();//只放一次，用movie.loop();可以連續放
}///只能放影片檔
void draw(){
 if( movie.available() )movie.read();///如果有影片就叫出來
 set(0,0,movie); //把影片的畫面放在0,0座標
}
```
## 可以存成圖片或影片檔
```c
import processing.video.*; ///加入外掛要用import
Capture cam;///global變數
void setup(){
  size(640,480); 
  println( Capture.list() ); //把所有鏡頭放進來
  cam = new Capture(this, "鏡頭" );///開啟視訊鏡頭 
  cam.start();//開啟鏡頭
}
void draw(){
  if( cam.available() ){ 
    cam.read();
    //save("image.png");//可以畫面截圖(裡面寫圖檔)  
  }
  set(0,0,cam) ;//也可以用image但會比較慢
  saveFrame();///將每個影格都存起來
}///可以再工具(TOOL)選擇movie maker做成影片檔(mov檔)
```
## 老師的poker程式
```c
String []face={"Spade", "Heart", "Dimand", "Club"};
String []num={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int [] card= new int[52];
void drawCard(int f, int n, int x, int y){
fill(255);
rect(x,y, 100,150);
textAlign(CENTER,CENTER);
if(f==0 || f==3) fill(0);
else fill(255,0,0);
textSize(20);
text(face[f], x+50,y+40);
textSize(60);
text(num[n], x+50,y+90);
}
void setup(){
size(600,640);
for(int i=0; i<52; i++) card[i] = i;
shuffleCard();
}
void draw(){
background(#3442B7);
for(int k=0; k<4; k++){
for(int i=0; i<5; i++){
int f=card[i+k*5]/13, n = card[i+k*5]%13;
drawCard(f, n, i*110, k*160);
}
}
}
void shuffleCard(){
for(int i=0; i<1000; i++){
int a=int(random(52)), b=int(random(52));
int temp=card[a];
card[a]=card[b];
card[b]=temp;
}
}
void mousePressed(){
shuffleCard();
}
```
