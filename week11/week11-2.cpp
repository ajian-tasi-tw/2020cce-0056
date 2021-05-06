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
