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

