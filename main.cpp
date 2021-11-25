#include "printMenu.cpp"
#include "checkIdPw.cpp"
#include "classDefine.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <cstring>
#include <windows.h>      // �ܼ�â ���� API
using namespace std;

int main()
{
    // ü�� ����, ũ�� 10¥��, 0���� �ʱ�ȭ (�����ȭ���� ����)
    vector<int> temp (10, 0);
    vector<int> oxygen (10, 0);

    // �޴� ���ÿ�
    int menuChoice = 0;
    // �޴� �ݺ���
    int flag = 1;

    // ���̾�̽� ����, �ǻ� ���̵�� �н�����
    string docId = null;
    string docPw = null;

    // �ܼ�â�� �̸� ����
    system("title ȯ�� ���� ���� ���α׷�");

    // �ǻ� �α��� �� ��й�ȣ üũ�� �Լ� ȣ��
    checkIdAndPw();

    while (flag)
    {
        // �޴� ��� �Լ� ȣ��
        PrintMenu();

        cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
            system("cls");
            printPatient(); // ����ȯ�� ��ȸ
            break;

        case 2:
            system("cls");
            schedule(); // ���� ���� Ȯ��
            break;

        case 3:
            system("cls");
            patientDisplay(); // ȯ�� ��� ����
            break;

        case 4:
            system("cls"); // �����ϱ�
            flag = 0;

            printf("%c[1;36m", 27);      // �� ���� �ڵ�, ��Ʈ��
            printf("���α׷��� ����Ǿ����ϴ�.\n\n");
            printf("%c[0m", 27);      //������ ������ ����
            break;

        // 1 ~ 4 �� �ܿ� �ٸ� �� �Է����� ��
        default:

            system("cls");

            printf("%c[1;31m", 27);      // �� ���� �ڵ�, ������ (1;31)
            printf("1~ 4������ ���� �־��ּ���.\n\n");
            printf("%c[0m", 27);      //������ ������ ����

            system("pause");
            break;
        }
    }
}