#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line );
    printf("%s\n",line2 );

    char line3[]="majority�o�O�n���A�n�h���N�h����";
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line3);

    printf("�A�۫H��?�o�Oline4:==%s==\n",line4);///���äF
}

