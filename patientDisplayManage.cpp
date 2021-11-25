#include "main.cpp"
#pragma once

// 환자 기록 열람
void Doctor::patientDisplay()
{
    cout << "\nName : " << name;
    cout << "\nAge : " << age;
    cout << "\nSymptoms : " << symptoms;
    cout << "\nHistory : " << history;
    cout << endl << endl;
}

// 환자에 대한 메모 출력
void Doctor::patientDisplayNote()
{
    cout << "환자 메모 : " << note << endl;
}