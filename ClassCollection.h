#include <string>
using namespace std;
#pragma once

class Doctor
{

public:
    // ���� �������� �ʱ�ȭ
    string sched[5] = { "���� ����", "���� ����", "���� ����", "���� ����", "���� ����" };

    // ���� ���� Ȯ�� �� ����
    void schedule() {};

    // ���� ȯ�� ���
    void printPatient() {};
    
    // ȯ�� ��� ��ȸ
    void patientDisplay() {  }

    // ȯ�ڿ� ���� �޸� �ۼ�
    void patientDisplayNotes() {}

};