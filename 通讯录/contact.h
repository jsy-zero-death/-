#define _CRT_SECURE_NO_WARNINGS
#define constexpr
#pragma warbubg(disable:4996)
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include <sys/types.h>

#define MAX 1000
#define MXA_NAME 20
#define MXA_SEX 5
#define MXA_TELE 12
#define MXA_ADDR 30

enum Option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

struct PeoInfa
{
	char name[MXA_NAME];
	int age;
	char sex[MXA_SEX];
	char tele[MXA_TELE];//电话
	char addr[MXA_ADDR];//地址
};
//通讯录类型
struct Contact
{
	struct PeoInfa data[MAX];//存放1000个信息
	int size;//记录当前已经有的元素个数
};

//声明函数
void InitContact(struct Contact* ps);//初始化
void AddContact(struct Contact* ps);//增加一个信息
void showContact(const struct Contact* ps);//显示所有信息
void DelContact(struct Contact* ps);//删除指定信息
void searchContact(const struct Contact* ps);//查找指定信息
void modifyComtact(struct Contact* ps);//修改指定信息
