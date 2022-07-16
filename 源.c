#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void er()
{
	int innum;//输入数字
	char midnum[32];//中间处理数据的数组
	int i, j;//循环的变量
	printf("请输入要转换为二进制的十进制数字：");
	scanf("%d", &innum);//从键盘接收数字，注意&
	getchar();//清理缓冲区
	for (i = 0; i < 32; i++)//32位二进制数字
	{
		if (innum % 2 == 1)
			midnum[i] = 1;
		else
			midnum[i] = 0;
		innum = innum / 2;
	}
	printf("转换为二进制为：");
	for (j = 31; j >= 0; j--)
	{
		printf("%d", midnum[j]);
		if (j % 4 == 0 && j + 1 != 32)
			printf(" ");
	}
	printf("\n");
}

int main()
{
	char choice;
	while (1)
	{
		er();
		printf("是否退出？(Y/N)\n");
		choice = getchar();
		if (choice == 'Y')//判断是否退出程序
			exit(0);
	}
	return 0;
}