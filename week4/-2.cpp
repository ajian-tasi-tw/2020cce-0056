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
