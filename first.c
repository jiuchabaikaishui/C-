/*
这个程序从标准输入中读取输入行并在标准输出中打印这些输入行，
每个输入行的后面一行是该行内容的一部分。

输入的第1行是一串列标号，串的最后以一个负号结尾。
这些列标号成对出现，说明需要打印的输入行的列的范围。
例如，0 3 10 12 -1 表示第0列到第3列，第10列到第12列的内容将被打印。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLS	20
#define MAX_INPUT	1000

/*读取列标号，如果超出规定范围则不予理会*/
int read_column_numbers(int columns[], int max);
/*处理输入行，将指定列的字符链接在一起，输出以NUL结尾*/
void rearrange(char *coutput, char const *input, int n_columns,int const columns[]);

int main(void)
{
	int n_columns;		/*进行处理的列标号*/
	int columns[MAX_COLS];	/*需处理的列数*/
	char input[MAX_INPUT];	/*容纳输入行的数组*/
	char output[MAX_INPUT];	/*容纳输出行的数组*/
	
	//读取该串列标号
	n_columns = read_column_numbers(columns, MAX_COLS);

	//读取、处理和打印剩余的输入行
	while(gets(input) !- NULL)
	{
		printf("Original input:%s\n",input);
		rearrange(output, input, n_columns, columns);
		printf("Rearranged line:%s\n");
	}

	return EXIT_SUCCESS;
}

/*读取列标号，如果超出规定范围则不予理会*/
int read_column_numbers(int columns[], int max)
{
	int num = 0;
	int ch;

	/*
	取得列标号，如果所读取的书小于0则停止。
	*/
	while(num < max && scanf("%d",&columns[num]) == 1 && columns[num] >= 0)
	{
		num += 1;
	}

	/*丢弃该行中包含最后一个数字的那部分内容。*/
	while((ch = getchar()) != EOF && ch != '\n')
	{
		
	}

	return num;
}

/*处理输入行，将指定列的字符链接在一起，输出以NUL结尾*/
void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
	int col;	/*columns数字的下标*/
	int output_col;	/*输出列计数器*/
	int len;	/*输入行的长度*/

	len = strlen(input);
	output_col = 0;

	/*处理每对列标号。*/
	for(col = 0; co; < n_columns; col += 2)
	{
		int nchars = columns[col + 1] - columns[col] + 1;

		/*如果输入行结束或输出行数字已满，就结束任务。*/
		if(columns[col] >= len || output_col MAX_INPUT -1)
		{
			break;
		}
	}
}
