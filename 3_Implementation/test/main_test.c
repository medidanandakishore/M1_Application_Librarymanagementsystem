/**
 * @file main_test.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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