#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//����
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char ISwin(char board[ROW][COL], int row, int col);
int ISfull(char board[ROW][COL], int row, int col);