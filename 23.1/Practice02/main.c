//
//  main.c
//  Practice02
//
//  Created by 綦 on 16/10/17.
//  Copyright © 2016年 PowesunHolding. All rights reserved.
//

/*
 1.编写一个程序，从标准输入读取一些字符，并把它们写到标准输出上。它同时应该计算checksum值，并写在字符的后面。
 2.编写一个程序，一行一行地读入输入行，直至到达文件尾。算出每行输入行的长度，然后把最长的那行打印出来。
 */
#include <stdio.h>
#include <string.h>
#define MAX_ROW_LENTH	1000
#define MAX 1000

void practice03();
void practice04();
int main(int argc, const char * argv[]) {
    practice03();
    
    return 0;
}

void practice03()
{
    int ch;
    int checksum = -1;
    
    while ((ch = getchar()) != EOF) {
        checksum += ch;
        
        if (ch == '\n') {
            printf("（%i）", checksum);
        }
        
        putchar(ch);
        
        if (ch == '\n') {
            printf("（%d）", checksum);
            break;
        }
    }
}
void practice04()
{
    int maxRowLenth = 0;
    int currentLenth = 0;
    int ch;
    char maxRow[MAX_ROW_LENTH];
    char currentRow[MAX_ROW_LENTH];
    while ((ch = getchar()) != EOF) {
        currentRow[currentLenth] = ch;
        currentLenth++;
        if (ch == '\n') {
            if (currentLenth >= maxRowLenth) {
                maxRowLenth = currentLenth;
                strncpy(maxRow + 0, currentRow + 0, currentLenth);
            }
            
            currentLenth = 0;
        }
    }
    
    printf("最长的行：%s", maxRow);
}
