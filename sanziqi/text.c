#include "game.h"

void menu()
{
    printf("*******************************\n");
    printf("****** 1.开始     2.结束 ******\n");
    printf("*******************************\n");
}

//实现游戏
void game()
{   
    //数组-存放走出的棋盘信息
    char board[HENG][SHU]={0};
    //初始化棋盘
    initboard(board,HENG,SHU);
    //打印棋盘
    displayboard(board,HENG,SHU);
    //开始游戏
    char ret=0;
    while(1)
    {
        //玩家下棋
        playmove(board,HENG,SHU);
        displayboard(board,HENG,SHU);
        //判断玩家是否赢
        ret=win(board,HENG,SHU);
        if (ret != 'c')
        {
            break;
        }
        //电脑下棋
        commove(board,HENG,SHU);
        displayboard(board,HENG,SHU);
        //判断电脑是否赢
        ret=win(board,HENG,SHU);
        if (ret != 'c')
        {
            break;
        }
    }
    if (ret=='*')
    {
        printf("玩家赢\n");
    }
    else if(ret=='#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
}

void test()
{    
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {   
        menu();
        printf("请选择:> ");
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
                printf("选择错误,请重新选择\n");
                break;  
        }   
    }while(input);
}

int main()
{
    test();
    return 0;
}