#include <string>
using namespace std;
#pragma once

class Doctor
{

public:
    // 예약 가능으로 초기화
    string sched[5] = { "예약 가능", "예약 가능", "예약 가능", "예약 가능", "예약 가능" };

    // 예약 일정 확정 및 변경
    void schedule() {};

    // 응급 환자 출력
    void printPatient() {};
    
    // 환자 기록 조회
    void patientDisplay() {  }

    // 환자에 대한 메모 작성
    void patientDisplayNotes() {}

};