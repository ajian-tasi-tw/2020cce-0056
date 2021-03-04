#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);

    int *p=&n[0];   ///p1裡面，放的是n1的住址 &n1
    *p=200;
    printf("n[0]=%d n[1]=%d n[2]=%d\n",n[0],n[1],n[2]);
    return 0;
}
