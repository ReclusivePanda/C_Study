//C语言作业_第5章_04
//定义eng_char为英文字母的个数
//定义space_char为空格字符的个数
//定义digit_char为数字字符的个数
//定义other_char为其他字符的个数
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	char c;
	int eng_char = 0, space_char = 0, digit_char = 0, other_char = 0;
	printf("请输入一行字符：");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			eng_char++;
		}
		else if (c == ' ')
		{
			space_char++;
		}
		else if (c >= '0' && c <= '9')
		{
			digit_char++;
		}
		else
		{
			other_char++;
		}
	}

	printf("英文字母数量:%d\n空格数量:%d\n数字数量:%d\n其他字符数量:%d\n", eng_char, space_char, digit_char, other_char);
 _getch();
 return 0;
}
