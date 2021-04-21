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
	char tele[MXA_TELE];//�绰
	char addr[MXA_ADDR];//��ַ
};
//ͨѶ¼����
struct Contact
{
	struct PeoInfa data[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��������
void InitContact(struct Contact* ps);//��ʼ��
void AddContact(struct Contact* ps);//����һ����Ϣ
void showContact(const struct Contact* ps);//��ʾ������Ϣ
void DelContact(struct Contact* ps);//ɾ��ָ����Ϣ
void searchContact(const struct Contact* ps);//����ָ����Ϣ
void modifyComtact(struct Contact* ps);//�޸�ָ����Ϣ
