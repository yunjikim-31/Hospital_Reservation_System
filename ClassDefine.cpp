#include "ClassCollection.h"
#include "main.cpp"
#pragma once

// 예약 일정 관리, 외부 클래스 정의
void Doctor :: Schedule()
{
    cout << "\n오늘의 예약 일정입니다. : \n";
    for (int loop = 0; loop < 5; loop++) {
        cout << (loop + 1) << "번 일정" << " : " << sched[loop] << endl;
    }
}