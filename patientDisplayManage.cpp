#include "main.cpp"
#pragma once

// ȯ�� ��� ����
void Doctor::patientDisplay()
{
    cout << "\nName : " << name;
    cout << "\nAge : " << age;
    cout << "\nSymptoms : " << symptoms;
    cout << "\nHistory : " << history;
    cout << endl << endl;
}

// ȯ�ڿ� ���� �޸� ���
void Doctor::patientDisplayNote()
{
    cout << "ȯ�� �޸� : " << note << endl;
}