
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief 
 * 
 */
struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};
/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
struct library l[100];
char ar_nm[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;
