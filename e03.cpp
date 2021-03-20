#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n/10!=0){
		n/=10;
	}
	printf("%d",n);
}
