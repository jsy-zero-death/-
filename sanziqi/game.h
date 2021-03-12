#define HENG 3
#define SHU 3
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//库函数
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void initboard(char board[HENG][SHU],int heng,int shu);
void displayboard(char board[HENG][SHU],int heng,int shu);
void playmove(char board[HENG][SHU],int heng,int shu);
void commove(char board[HENG][SHU],int heng,int shu);

char win(char board[HENG][SHU],int heng,int shu);
//玩家赢 返回*
//电脑赢 返回#
//平局   返回q
//继续   返回c