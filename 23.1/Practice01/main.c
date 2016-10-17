//
//  main.c
//  Practice01
//
//  Created by 綦 on 16/10/17.
//  Copyright © 2016年 PowesunHolding. All rights reserved.
//

/*
 编写一个程序，从标准输入读取几行输入。每行都要打印到标准输出上，前面要加上行号，试图处理输入行的长度没有上限。
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    //通过从输入中逐字符进行读取而不是逐行读取，可以避免长度的限制。
    int ch;//接收输入的字符
    int lineNum = 1;//记录输入的行号
    int isBegin = 1;//记录是否为新的一行的开始
    
    //读取字符，并逐个处理
    while ((ch = getchar()) != EOF) {
        //如果为新的一行，打印行号
        if (isBegin) {
            isBegin = !isBegin;
            printf("第%i行:", lineNum);
        }
        
        //打印字符
        putchar(ch);
        
        //如果为行尾，对行尾进行处理
        if (ch == '\n') {
            isBegin = !isBegin;
            lineNum++;
        }
    }
    
    return 0;
}
