#include "Header.h"

//����) ���� ������ �ڵ带 �ۼ��ϼ���
//0���� 100������ ������ �Է�
//�Է��� ������ 60�� �̻��� ��� "�հ�"
//60�� �̸��� ��� "���հ�"�� �����

int main()
{
	//��
	/*int Score;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &Score);

	if (Score >= 60)
	{
		printf("�հ�\n");
	}
	else
	{
		printf("���հ�\n");
	}*/

	//�����
	/*int score;

	printf("0���� 100������ ���ڸ� �Է����ּ��� >>");
	scanf("%d", &score);
	if (score >= 60)
	{
		printf("�հ�\n");
	}
	else
	{
		printf("���հ�\n");
	}*/

	//��������2) ���� ������ �ڵ带 �ۼ��ϼ���
	//ȭ�鿡�� �޴��� �޴��� ������ ǥ�õǾ� ����(�޴��� �����Ӱ� �ۼ�)
	//����ڴ� �޴��� ���� �� �޴��� ��ȣ�� �Է�
	//����ڰ� �� �޴��� ������ ������ �����ϰ� ���� ��� �� �޴��� ������ �� ����
	//���� ��쿡�� �ܾ��� �����ϴٴ� �޼����� ��µ�

	//��
	int money = 1200;
	int tteok = 1000;
	int omuk = 500;
	int tui = 1000;
	printf("1.������%d  2.�%d  3.Ƣ��%d\n", tteok, omuk, tui);
	int select;
	printf("�޴��� ����ּ��� >> ");
	scanf("%d", &select);
	if (select == 1)
	{
		if (money >= tteok)
		{
			printf("���� ����");
		}
		else
		{
			printf("�ܾ��� �����մϴ�.");
		}
	}
	else if (select == 2)
	{
		if (money >= omuk)
		{
			printf("���� ����");
		}
		else
		{
			printf("�ܾ��� �����մϴ�.");
		}
	}
	else if (select == 3)
	{
		if (money >= tui)
		{
			printf("���� ����");
		}
		else
		{
			printf("�ܾ��� �����մϴ�.");
		}
	}

	return 0;
}