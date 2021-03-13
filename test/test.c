#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//包含一个叫stdio.h的文件
//std-标准 standard input output（输入，输出）
#include <string.h>//库函数
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*struct Shu
{
    char shuming[20];
    short jiage;
};*/
//int main()//梦函数（主函数）-程序的入口-main函数有且仅有一个
//{   
    /*int n=0;
    int ret=1;
    int sum=0;
    for(n=1;n<=3;n++)
    {
        ret =ret*n;
        sum=sum+ret;
    }
    printf("%d\n",sum);*/  //求1!+2!+3!....+10!

    /*int a = 0;
    int n = 0;
    int N = 1;
    printf ("输入阶乘n>:");
    scanf ("%d",&n);
    for(a=1;a<=n;a++)
    {
        N=N*a;
    }
    printf("N=%d\n",N);*/ //求n的阶乘

    /*struct Shu a1={"c语言",55};
    printf("书名:%s\n",a1.shuming);
    printf("价格:%d元\n",a1.jiage);
    a1.jiage=40;//修改书的价格
    printf("修改后的价格:%d元\n",a1.jiage);
    strcpy(a1.shuming,"c++");//strcpy-string copy-字符串拷贝-库函数
    printf("修改后的书名:%s\n",a1.shuming);*/
    ;//空语句

    /*int a =10;//4个字节
    int* p=&a;//取地址  p是一个变量，有一种变量是用来存放地址的 - 指针变量
    printf("%p\n",&a);  
    printf("%p\n",p);
    *p=20;// * - 解引用操作符/间接访问操作符
    printf("%d\n",a);
    printf("%d\n",sizeof(p));*/

    //逗号表达式 exp1，exp2，exp3，…………expN
    //int a = (int)3.14;//(强制类型转换)

    /*int line=0;
    printf("加入比特\n");
    while(line<2)
    {
        printf("敲一行代码\n");
    line++;
    };
    if(line>=2)
        printf("好offer\n");*/

        //int a = 5%2;//取余数
        //printf("%d\n",a);

   /*int input = 0;
    printf("加入比特\n");
    printf("你要好好学习吗？(1/0)>:");
    scanf("%d",&input);
    if(input == 1)
        printf("好offer\n");
    else
        printf("卖红薯\n");*/

    //return 0;//返回0
//}
//int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
//void main（）这种写法是过时的写法

/*int main()//把三个数字永远按从大到小排列
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d" , &a,&b,&c);
    if(a<b)
    {
        int tem=a;
        a=b;
        b=tem;
    }
    if(a<c)
    {
        int tem=a;
        a=c;
        c=tem;
    }
    if(b<c)
    {
        int tem=b;
        b=c;
        c=tem;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}*/

/*int main()//打印1到100 三的倍数
{
    int i = 0;
    for(i=1;i<=100;i++)
    {
        if(i%3 == 0)
            printf("%d ",i);

    }
    return 0;
}*/ 

/*int main()//求两个数字最大公约数
{
    int m=0;
    int n=0;
    int r=0;
    scanf("%d%d",&m,&n);
    while(m%n)
    {
        r=m%n;
        m=n;
        n=r;
    }
    printf("%d\n",n);
    return 0;
}*/

/*int main() //求1000到2000的闰年
{
    int year=0;
    int cishu=0;
    for(year=1000;year<=2000;year++)
    {
        if(year%4==0 && year%100 !=0)
       {    
            printf("%d ",year);
            cishu++;
       }
        else if(year%400==0)
        {
            printf("%d ",year);
            cishu++;
        }
        //还有一种写法
        //if(((year%4==0)&&(year%100 !=0)) || (year%400==0))
        //printf("%d ",year);
        //cishu++;
    }
    printf("\ncishu=%d\n",cishu);
    return 0;
}*/

/*int main() //求100到200的质数（素数）（辗转相除法）
{
    int i=0;
    int cishu=0; 
    for(i=101;i<=200;i+=2)
    {
        int j=0;
        for(j=2;j<=sqrt(i);j++) //sqrt（）-开平分的数学库函数
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            cishu++;
            printf("%d ",i);
        }
    }
    printf("\ncishu=%d\n",cishu);
    return 0;
}*/

/*int main()//演示多个字符从两端移动，向中间汇聚
{
    int zuo=0;
    char arr1[]={"Holle word"};
    char arr2[]={"##########"}; 
    int you=strlen(arr1)-1;
    while(zuo<=you)
    {
        arr2[zuo]=arr1[zuo];
        arr2[you]=arr1[you];
        printf("%s\n",arr2);
        Sleep(1000);//函数，停顿一秒，里面数字单位是毫秒
        system("cls");//执行系统命令的一个函数-cls是清空屏幕
        zuo++;
        you--; 
    }
    printf("%s\n",arr2);
    return 0;
}*/

/*int main()//二分查找
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;

    int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
    int zuo=0;//左下标
    int you=sz-1;//右下标
 
    while(zuo<=you)
    {
        int mid=(zuo+you)/2;//查找中间值
        if(arr[mid]>k)
        {
            you=mid-1;
        }
        else if(arr[mid]<k)
        {
            zuo=mid+1;
        }   
        else if(arr[mid]==k)
        {
            printf("找到了，下标是:%d\n",mid);
            break;
        }
    }
    if(zuo>you)
    {
        printf("找不到\n");
    }
    return 0;
}*/

/*int main()//模拟用户登录情景，只能登录三次（只允许输入三次密码，如果密码输入正确，则提示登入成功，如果三次均失败，则提示退出程序）
{
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("请输入密码:>");
        scanf("%s",password);
        if(strcmp(password,"123456")==0)//==不能用来比较两个字符串是否想等，应该使用一个库函数-strcmp
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if(i==3)
        printf("三次密码均错误，退出程序\n");
    return 0;
    }*/

/*int main()//1到100,9的个数
{
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%10==9)//个位数是9 除以10余9
        count++;
        if(i/10==9)//十位数是9 除以10商9
        count++;
    }
    printf("count= %d\n",count);
    return 0;
}*/

/*int main()//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100（可以先算出分母为奇数和，偶数和，然后奇数减偶数）
{
    int i=0;
    double sum=0.0;
    int flag=1;
    for(i=1;i<=100;i++)
    {
        sum+=flag*1.0/i;
        flag=-flag;
    }
    printf("%1f\n",sum);
    return 0;
}*/

/*int main()//打印出10个数字里的最大值
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int max=arr[0];
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<sz;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max= %d\n",max);
    return 0;
}*/

/*int main()//九九乘法表
{
    int i=0;
    for(i=1;i<=9;i++)
    {
        int j=1;
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d ",i,j,i*j);//-2是向左对齐，2是向右对齐
        }
        printf("\n");
    }
    return 0;
}*/

/*void menu()//猜数字游戏（1.电脑会生成一个随机数；2.猜数字）
{
    printf("************************\n");
    printf("*** 1. play   0.exit ***\n");
    printf("************************\n");
}
//RAND_MAX==32767
void game()
{
    int ret=0; 
    int guess=0;  
    ret=rand()%100+1;//生成1-100之间的随机数 rand()是生成0到32767的随机数
    //printf("%d\n",ret);
    while(1)
    {   
        printf("请猜数字:>");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("猜大了\n");
        }
        else if(guess<ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}
int main()//猜数字游戏（1.电脑会生成一个随机数；2.猜数字）
{
    int input=0;
    srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起始点
                                    //time_t time(time_t *timer)
                                    //time_t
    do
    {
        menu();
        printf("请选择(0/1)>:");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }
    }while(input);
    return 0;
}*/

/*int main() //strcpy-string copy-字符串拷贝
{
    char arr1[]="bit";
    char arr2[]="########";
    //           bit\0
    strcpy(arr2,arr1);
    printf("%s\n",arr2); //打印出的是bit   
    return 0;
}*/

/*int main()//memset - memory set — 内存设置
{
    char arr[]="hello world";
    memset(arr,'*',5);
    printf("%s\n",arr);//打印出的是***** world
    return 0;
}*/

/*int get_max(int x, int y) //学会自己自定义函数
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a=10;
    int b=20;
    int max=get_max(a,b);
    printf("max = %d\n",max);
    return 0;
}*/

/*void jiaohan(int* pa,int* pb)//用自定义函数实现两个数的互换
{                   //函数接收a和b的房子地址
    int tmp=0;
    tmp=*pa;// *pa表示通过a的房子地址找到了a，可以说是 *pa==a
    *pa=*pb;
    *pb=tmp;
}
int main()
{
    int a=10;
    int b=20;
    int tmp=0;
    printf("a=%d b=%d\n",a,b);
    jiaohan(&a,&b);//把a和b房子地址转给函数
    printf("a=%d b=%d\n",a,b);
    return 0;
}*/

/*int sushu(int x) //输入一个数字，判断是不是素数
{
    int i=0;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {      
            return 0;
        }
    }
    return 1;
        
}
int main()
{   
    int a=0;
    scanf("%d",&a);
    if(sushu(a)==1)
        printf("%d",a);
    else
        printf("不是素数");
    return 0;
}*/

/*int run_nian(int x)//输入一个数字，判断是不是闰年
{
    if((x%4==0&&x%100!=0) || (x%400==0))
        return 1;
    else
        return 0;
}
int main()
{
    int year=0;
    scanf("%d",&year);
    if(1==run_nian(year))
    {
        printf("%d",year);
    }
    else
        printf("不是闰年");
    return 0;
}*/

/*int erfen_chazhao(int arr[],int k,int sz) //函数实现二分查找
{                       //这里arr[]是一个指针
    int zuo=0;
    int you=sz-1;

    while(zuo<=you)
    {
        int mid=(zuo+you)/2;//中间元素的下标
        if(arr[mid]<k)
        {
            zuo=mid+1;
        }
        else if(arr[mid]>k)
        {
            you=mid-1;
        }
        else
        {
            return mid;
        }   
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int ret=erfen_chazhao(arr,k,sz);//这里传给函数的arr是首元素地址
    if(ret==-1)
    {
        printf("找不到指定的数字\n");
    }
    else
    {
        printf("找到了，下标是: %d\n",ret);
    }
    return 0;
}*/

/*void Add(int* p)//写一个函数，使得没调用一次函数，使num+1
{
    (*p)++;
}
int main()
{
    int num=0;
    Add(&num);
    printf("%d\n",num);//1
    Add(&num);
    printf("%d\n",num);//2
    Add(&num);
    printf("%d\n",num);//3
    return 0;
}*/

/*int main()//链式访问
{
    printf("%d",printf("%d",printf("%d",43)));//4321
    //printf函数的返回值是字符个数
    return 0;
}*/

/*void print(int n)//函数递归1（输入一个数，依次打印每一个数字）
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%d ",n%10);
}
int main()
{
    unsigned int sum=0;
    scanf("%d",&sum);
    print(sum);
    return 0;
}*/

/*int my_strlen(char* str)//函数递归2，模拟实现一个strlen函数（求字符串长度的）
{
    if(*str != '\0')
        return 1+my_strlen(str+1);
    else
        return 0;
}
int main()
{
    char arr[]="bit";
    int len=my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
    printf("len = %d\n",len);
    return 0;
}*/

/*int fac(int n)//函数递归3，求一个数的阶乘
{
    if(n<=1)
        return 1;
    else
        return n*fac(n-1);
}
int main()
{  
    int ret=0;
    int n=0;
    scanf("%d",&n);
    ret=fac(n);
    printf("%d\n",ret);
    return 0;
}*/

/*int fib(int n)//函数递归4，求第n个斐波那契数（不适合用递归，计算速度慢）
{
    if(n<=2)
    {
        return 1;
    }
    else
        return fib(n-1)+fib(n-2);
    //int a=1;
    //int b=1;
    //int c=1;
    //while(n>2)
    //{
        //c=a+b;
        //a=b;
        //b=c;
        //n--；
    //}
    //return c; //循环解决，求第n个斐波那契数
}
int main()
{
    int n=0;
    int ret=0;
    scanf("%d",&n);
    ret=fib(n);
    printf("ret=%d\n",ret);
    return 0;
}*/

/*int fib1(int n)//自己写的青蛙跳台阶问题，类似于斐波那契数列（1.2.3.5.8.13.21....）
{
    if(n<=2)
        return n;
    if(n>2)
        return fib1(n-1)+fib1(n-2);
}
int main()
{
    int ret=0;
    int n=0;
    printf("请输入青蛙跳的台阶数:");
    scanf("%d",&n);
    ret=fib1(n);
    printf("青蛙跳法总数: %d\n",ret);
    return 0;
}*/

/*long count = 0;//记录移动的次数 (百度搜的汉诺塔问题)
//n个盘子，a移动到c，用b做临时塔
void hanoi(int n,char a,char b,char c)
{
    if (1 == n)
    {
        printf("第%d次，%c塔--->%c塔\n",++count,a,c);
    }
    else
    {

        hanoi(n-1,a,c,b);//递归调用，a移到b,c做临时塔
        printf("第%d次，%c塔--->%c塔\n",++count,a,c);
        hanoi(n-1,b,a,c);
    }
}
int main(void)
{
    int h;
    printf("输入汉诺塔圆盘的数量： ");
    scanf("%d",&h);
    hanoi(h,'A','B','C');
    return 0;
}*/

/*int main()//只求n个汉诺塔移动次数，数学表达就是（（n=2^n）-1）
{
    int n=0;
    scanf("%d",&n);
    int i=pow(2,n);
    n=i-1;
    printf("%d",n);
    return 0;
}*/

/*void maopao_paixu(int arr[],int sz)//冒泡排序，实现对数组的升序
{
    //确定冒泡排序的趟数
    int i=0;
    for(i=0;i<sz-1;i++)
    {
        int flag=1;//假设这一趟排序的数据已经有序
        //每一趟冒泡排序
        int j=0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;//本趟排序的数据其实不完全有序
            }
        }
        if(flag==1)
        {
            break;
        }
    }   
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);
    //对arr进行排序，排序升序
    maopao_paixu(arr,sz);//冒泡排序函数
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}*/

/*int main()//两个数进行交换，不用第三个变量
{
    int a=3;
    int b=5;
    a=a^b;//3^5=6
    b=a^b;//6^5=3
    a=a^b;//6^3=5
    printf("%d,%d",a,b);
    return 0;
}*/

/*int main()//输入一个数字，求这个数二进制 反码中1的个数
{
    int num=0;
    int count=0;
    scanf("%d",&num);
    int i=0;
    for(i=0;i<32;i++)
    {
        if(1==((num>>i)&1))
            count++;
    }
    printf("这个数的二进制反码中1的个数: %d\n",count);
    return 0;
}*/

/*void init(int arr[],int sz)//实现数组的初始化 打印 逆序
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        arr[i]=0;
    }
}
void print(int arr[],int sz)
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void reverse(int arr[],int sz)
{
    int zuo=0;
    int you=sz-1;
    while(zuo<=you)
    {
        int tmp=arr[zuo];
        arr[zuo]=arr[you];
        arr[you]=tmp;
        zuo++;
        you--;
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);
    //init(arr,sz);//把数组初始化0
    print(arr,sz);//打印
    reverse(arr,sz); //逆序
    print(arr,sz);//逆序后打印
    return 0;
}*/

/*int main()//实现两个数组里的元素交换
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,0};
    int tmp=0;
    int i=0;
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    for(i=0;i<sz;i++)
    {
        tmp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=tmp;
    }
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr1[i]); 
    }
    printf("\n");
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}*/

/*int main()//输入一个数字，求这个数二进制 反码中1的个数(2)
{
    int a=0;
    scanf("%d",&a);
    int count=0;
    while(a)
    {
        a=a&(a-1);
        count++;
    }
    printf("%d",count);
    return 0;
}*/

/*int text(int m,int n)//两个整数，二进制表达中，有多少位不同
{
    int tmp=m^n;
    int count=0;
    while(tmp)
    {
        tmp=tmp&(tmp-1);
        count++;
    }
    return count;
}
int main()
{
    int m=0;
    int n=0;
    scanf("%d%d",&m,&n);
    int count=text(m,n);
    printf("count=%d\n",count);
    return 0;
}*/

/*void print(int m)//获取一个数的二进制奇偶数，打印出来
{
    int i=0;
    printf("奇数位\n");
    for(i=0;i<32;i=i+2)
    {
        int a=(m>>i)&1;
        printf("%d ",a);
    }
    printf("\n");
    printf("偶数位\n");
    for(i=1;i<32;i=i+2)
    {
        int a=(m>>i)&1;
        printf("%d ",a);
    }
}
int main()
{
    int m=0;
    scanf("%d",&m);
    print(m);
    return 0;
}*/

/*void print(int *p,int sz)//运用指针打印一个数组
{
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",*(p+i));
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sz=sizeof(arr)/sizeof(arr[0]);
    print(arr,sz);
    return 0;
}*/

/*void print(int n)//输入一个数字，就打印几几乘法表
{
    int i=0;
    for(i=1;i<=n;i++)
    {
        int j=0;
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-4d",i,j,i*j);
        }
        printf("\n");
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    print(n);
    return 0;
}*/

/*int my_strlen(char* str)//函数递归实现数组里面元素倒序，不能使用库函数
{
    int count=0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
void reverse_string(char arr[])
{
    char tmp=arr[0];
    int len=my_strlen(arr);
    arr[0]=arr[len-1];
    arr[len-1]='\0';
    if(my_strlen(arr+1)>=2)
        reverse_string(arr+1);
    arr[len-1]=tmp;
}
int main()
{
    char arr[]="abcdefg";
    reverse_string(arr);
    printf("%s\n",arr);
    return 0;
}*/

/*int digitsum(int num)//输入一个非负数字，求出各位数字之和，如123.打印6
{
    if(num>9)
    {
        return digitsum(num/10)+num%10;
    }
    else
    {
        return num;
    }
}
int main()//写一个递归函数digitsum（n），输入一个非负整数，返回组成它的数字之和
{
    unsigned int num=0;
    scanf("%d",&num);
    int ret=digitsum(num);
    printf("ret=%d\n",ret);
    return 0;
}*/

/*double pow(double n,double k)//编写一个函数，实现n的k次方，使用函数递归
{
    if(k<0)
        return (1.0/(pow(n,-k)));
    if(k==0)
        return 1;
    else
        return n*pow(n,k-1);
}
int main()
{
    int n=0;
    int k=0;
    scanf("%d%d",&n,&k);
    double ret=pow(n,k);
    printf("ret=%lf\n",ret);
    return 0;
}*/

/*int main()//死方法写的，求0到十万的自幂数，一位自幂数：独身数
          //                            三位自幂数：水仙花数
          //                            四位自幂数：四叶玫瑰数
          //                            五位自幂数：五角星数
          //                                                                  
{
    int i=0;
    for(i=0;i<=9;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=10;i<=99;i++)
    {
        int a=i%10;
        int b=i/10%10;
        if(i==pow(a,2)+pow(b,2))
            printf("%d ",i);
    }
    printf("\n");
    for(i=100;i<=999;i++)
    {
        int a=i%10;
        int b=i/10%10;
        int c=i/10/10%10;
        if(i==pow(a,3)+pow(b,3)+pow(c,3))
            printf("%d ",i);
    }
    printf("\n");
    for(i=1000;i<=9999;i++)
    {
        int a=i%10;
        int b=i/10%10;
        int c=i/10/10%10;
        int d=i/10/10/10%10;
        if(i==pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4))
            printf("%d ",i);
    }
    printf("\n");
    for(i=10000;i<=99999;i++)
    {
        int a=i%10;
        int b=i/10%10;
        int c=i/10/10%10;
        int d=i/10/10/10%10;
        int e=i/10/10/10/10%10;
        if(i==pow(a,5)+pow(b,5)+pow(c,5)+pow(d,5)+pow(e,5))
            printf("%d ",i);
    }
    return 0;
}*/

struct stu
{
    char name[20];
    short age;
    char tele;
    char sex[5];
}s1,s2,s3;//这三个是全局的结构体变量
int main()
{
    
    return 0;
}

