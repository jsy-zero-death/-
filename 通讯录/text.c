#include "contact.h"

void menu()
{
	printf("**************************\n");
	printf("****1.����		2.ɾ��****\n");
	printf("****3.����		4.�޸�****\n");
	printf("****5.��ӡ		6.����****\n");
	printf("****0.�˳�		      ****\n");
	printf("**************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼���������1000��Ԫ�ص������size
	//��ʼ��ͨѶ¼
	InitContact(&con);
	//
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case search:
			searchContact(&con);
			break;
		case modify:
			modifyComtact(&con);
			break;
		case show:
			showContact(&con);
			break;
		case sort:
			break;
		case exit:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ�� \n");
			break;
		}
	} while (input);
	return 0;
}