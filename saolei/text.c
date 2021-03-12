#include "game.h"

void menu()
{
    printf("*************************\n");
    printf("******1.play 2.exit******\n");
    printf("*************************\n");
}
void game()
{
    //雷的信息存储
    //1.布置好的雷的信息
    char mine[ROWS][COLS]={0};
    //2.排查出的雷的信息
    char show[ROWS][COLS]={0};
    //初始化
    inboard(mine,ROWS,COLS,'0');
    inboard(show,ROWS,COLS,'*');
    //打印棋盘
    //display(mine,ROW,COL);
    display(show,ROW,COL);
    //布置雷
    setmine(mine,ROW,COL);
    //扫雷
    findmine(mine,show,ROW,COL);
}
void test()
{
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 2:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，重新选择\n");
                break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}