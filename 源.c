#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void er()
{
	int innum;//��������
	char midnum[32];//�м䴦�����ݵ�����
	int i, j;//ѭ���ı���
	printf("������Ҫת��Ϊ�����Ƶ�ʮ�������֣�");
	scanf("%d", &innum);//�Ӽ��̽������֣�ע��&
	getchar();//��������
	for (i = 0; i < 32; i++)//32λ����������
	{
		if (innum % 2 == 1)
			midnum[i] = 1;
		else
			midnum[i] = 0;
		innum = innum / 2;
	}
	printf("ת��Ϊ������Ϊ��");
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
		printf("�Ƿ��˳���(Y/N)\n");
		choice = getchar();
		if (choice == 'Y')//�ж��Ƿ��˳�����
			exit(0);
	}
	return 0;
}