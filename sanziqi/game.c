#include "game.h"

void initboard(char board[HENG][SHU],int heng,int shu)
{
    int i=0;
    int j=0;
    for(i=0;i<heng;i++)
    {
        for(j=0;j<shu;j++)
        {
           board[i][j]=' ';
        }
    }
}

void displayboard(char board[HENG][SHU],int heng,int shu)
{
    int i=0;
    for(i=0;i<heng;i++)
    {
        
        int j=0;
        for(j=0;j<shu;j++)
        {
            //1.打印一行的数据
            printf(" %c ",board[i][j]);
            if(j<shu-1)
                printf("|");
        }
        printf("\n");
        //2.打印分割行
        if(i<heng-1)
        {
            for(j=0;j<shu;j++)
            {
                printf("---");
                if(j<shu-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void playmove(char board[HENG][SHU],int heng,int shu)
{
    int x=0;
    int y=0;
    printf("玩家走:>\n");
    printf("请输入要下的坐标:>\n");
    scanf("%d%d",&x,&y);
    //判断x，y坐标的合法性
    while(1)
    {
        if(x>=1 && x<=heng && y>=1 && y<=shu)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]=='*';
                break;
            }  
            else
            {
                printf("该坐标被占用\n");
            }     
        }
        else
        {
            printf("坐标非法，请重新输入!\n");
        }
    }
}

void commove(char board[HENG][SHU],int heng,int shu)
{
    int x=0;
    int y=0;
    printf("电脑走:>\n");
    while(1)
    {
        x=rand()%heng;
        y=rand()%shu;
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }
}

//返回1表示棋盘满了
//返回0表示棋盘没满
int full(char board[HENG][SHU],int heng,int shu)
{
    int i=0;
    int j=0;
    for(i=0;i<heng;i++)
    {
        for(j=0;j<shu;j++)
        {
            if(board[i][j]==' ')
            {
                return 0;//没满
            }
        }
    }
    return 1;//满了 
}
char win(char board[HENG][SHU],int heng,int shu)
{
    int i=0;
    //横三行
    for(i=0;i<heng;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
        {
            return board[i][1];
        }
    }
    //竖三列
    for(i=0;i<shu;i++)
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]!=' ')
        {
            return board[1][i];
        }
    }
    //两个对角线
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
        return board[1][1];
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
        return board[1][1];
    //判断是否平局
    if(1==full(board,HENG,SHU))
    {
        return 'q';
    }
    return 'c';
}