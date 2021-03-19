#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//包含一个叫stdio.h的文件
//std-标准 standard input output（输入，输出）
#include <string.h>//库函数
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int text()
{
    printf("********************\n");
    printf("**1.加法    2.减法**\n");
    printf("**3.乘法    4.除法**\n");
    printf("**5.异或    0.退出**\n");
    printf("********************\n");
}
int jia(int x,int y)
{
    return x+y;
}
int jian(int x,int y)
{
    return x-y;
}
int cheng(int x,int y)
{
    return x*y;
}
int chu(int x,int y)
{
    return x/y;
}
int yihuo(int x,int y)
{
    return x^y;
}
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int(*p[])(int,int)={0,jia,jian,cheng,chu,yihuo};
do
{
    text();
    printf("请输入:>");
    scanf("%d",&a);
    if(a>=1&&a<=5)
    {
        printf("请输入两个需要计算的数字:>");
        scanf("%d%d",&b,&c);
        int ret=p[a](b,c);
        printf("%d\n",ret);
    }
    else if(a==0)
    {
        printf("退出\n");
    }
    else
    {
        printf("选择错误\n");
    }
}while(a);
    return 0;
}
