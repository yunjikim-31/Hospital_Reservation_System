#include "ClassCollection.h"
#include "main.cpp"
#pragma once

// ���� ���� ����, �ܺ� Ŭ���� ����
void Doctor :: Schedule()
{
    cout << "\n������ ���� �����Դϴ�. : \n";
    for (int loop = 0; loop < 5; loop++) {
        cout << (loop + 1) << "�� ����" << " : " << sched[loop] << endl;
    }
}