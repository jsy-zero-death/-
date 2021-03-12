#include "game.h"

void inboard(char board[ROWS][COLS],int rows,int cols,char set)
{
    int i=0;
    int j=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            board[i][j]=set;
        }
    }
}

void display(char board[ROWS][COLS],int row,int col)
{
    int i=0;
    int j=0;
    //打印列号
    for(i=0;i<=col;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(i=1;i<=row;i++)
    {
        printf("%d ",i);
        for(j=1;j<=col;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}

void setmine(char board[ROWS][COLS],int row,int col)
{
    int count=EASY_COUNT;
    while(count)
    {
        int x=rend()%row+1;//1-9
        int y=rend()%col+1;
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count--;
        }
    }
}

//'1'-'0'=1
int gei_mine_count(char mine[ROWS][COLS],int x,int y)
{
    return mine[x-1][y]+mine[x-1][y-1]+mine[x][y-1]+mine[x+1][y-1]+
    mine[x+1][y]+mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1]-8*'0';
}

void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;
    int win=0;
    printf("请输入排查雷的坐标:>");
    scanf("%d%d",&x,&y);
    while(win<row*col-EASY_COUNT)
    {
      if(x>=1 && x<=row && y>=1 && y<=col)
      {
          //坐标合法
          //1.踩雷
          if(mine[x][y]=='1')
          {
              printf("很遗憾，你被炸死了\n");
              display(mine,row,col);
              break;
          }
          else//不是雷
          {
              //计算x，y坐标周围有几个雷
              int count=gei_mine_count(mine,x,y);
              show[x][y]=count+'0';
              display(show,row,col);
              win++;
          }
      }
        else
          {
              printf("输入坐标非法，请重新输入!\n");
          }
    }
    if(win==row*col-EASY_COUNT)
    {
        printf("恭喜你，排雷成功\n");
        display(mine,ROW,COL);
    }
}
