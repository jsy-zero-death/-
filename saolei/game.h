#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//库函数
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

void inboard(char board[ROWS][COLS],int rows,int cols,char set);
void display(char board[ROWS][COLS],int row,int col);
void setmine(char board[ROWS][COLS],int row,int col);
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);