#include "contact.h"

void menu()
{
	printf("**************************\n");
	printf("****1.增加		2.删除****\n");
	printf("****3.查找		4.修改****\n");
	printf("****5.打印		6.排序****\n");
	printf("****0.退出		      ****\n");
	printf("**************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含1000个元素的数组和size
	//初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择:>");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择 \n");
			break;
		}
	} while (input);
	return 0;
}