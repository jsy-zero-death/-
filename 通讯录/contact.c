#define constexpr
#pragma warbubg(disable:4996)

#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));//�⺯��
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����,�޷�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);

		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));

		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);

		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);

		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void showContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//����
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
static int findbyneme(const struct Contact* ps,char name[MXA_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == srcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//��ʾ�Ҳ���
}
void DelContact(struct Contact* ps)
{
	char name[MXA_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	int i = findbyneme(ps, name);//����Ҫɾ��������ʲôλ�ã�û���ҵ�-1
	//2.ɾ��
	if (i == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ������
		int j = 0;
		for (j = 0; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void searchContact(const struct Contact* ps)
{
	char name[MXA_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int pos = findbyneme(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//����
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
		
	}
}

void modifyComtact(struct Contact* ps)
{
	char name[MXA_NAME];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = findbyneme(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);

		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));

		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);

		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);

		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸����\n");
	}
}

