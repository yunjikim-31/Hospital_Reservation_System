#include <windows.h>      // �ܼ�â ���� API
#include <stdio.h>
#pragma once
using namespace std;

// �۾� ������� ����
void TextColor(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void PrintMenu()
{
    system("cls");

    printf("%c[1;33m", 27);      // �� ���� �ڵ�, �����
    printf("========================================\n\n");
    printf("%c[0m\n", 27);      //������ ������ ����

    printf("%c[1;32m", 27);      // �� ���� �ڵ�, �ʷϻ�,  27�� ESCŰ ���
    printf("     ȯ�� ���� ���� ���α׷�\n\n");
    printf("%c[0m\n", 27);      //������ ������ ����

    TextColor(15);
    printf("1. ���� ȯ�� ��ȸ\n2. ���� ���� Ȯ�� �� ����\n3. ȯ�� ��� ����\n4. ���α׷� ����");

    printf("%c[1;33m", 27);      // �� ���� �ڵ�, �����
    printf("\n========================================\n");
    printf("%c[0m\n", 27);      //������ ������ ����

    TextColor(15);      // �Ͼ�� ��Ʈ�� ���� 
    printf("�޴��� �������ּ��� : ");

}