#include "printMenu.cpp"
#include "checkIdPw.cpp"
#include "classDefine.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <cstring>
#include <windows.h>      // 콘솔창 변경 API
using namespace std;

int main()
{
    // 체온 벡터, 크기 10짜리, 0으로 초기화 (산소포화도도 동일)
    vector<int> temp (10, 0);
    vector<int> oxygen (10, 0);

    // 메뉴 선택용
    int menuChoice = 0;
    // 메뉴 반복용
    int flag = 1;

    // 파이어베이스 연동, 의사 아이디와 패스워드
    string docId = null;
    string docPw = null;

    // 콘솔창의 이름 변경
    system("title 환자 예약 관리 프로그램");

    // 의사 로그인 및 비밀번호 체크용 함수 호출
    checkIdAndPw();

    while (flag)
    {
        // 메뉴 출력 함수 호출
        PrintMenu();

        cin >> menuChoice;

        switch (menuChoice)
        {
        case 1:
            system("cls");
            printPatient(); // 응급환자 조회
            break;

        case 2:
            system("cls");
            schedule(); // 예약 일정 확인
            break;

        case 3:
            system("cls");
            patientDisplay(); // 환자 기록 열람
            break;

        case 4:
            system("cls"); // 종료하기
            flag = 0;

            printf("%c[1;36m", 27);      // 색 변경 코드, 민트색
            printf("프로그램이 종료되었습니다.\n\n");
            printf("%c[0m", 27);      //원래의 색으로 변경
            break;

        // 1 ~ 4 값 외에 다른 수 입력했을 시
        default:

            system("cls");

            printf("%c[1;31m", 27);      // 색 변경 코드, 빨간색 (1;31)
            printf("1~ 4사이의 값을 넣어주세요.\n\n");
            printf("%c[0m", 27);      //원래의 색으로 변경

            system("pause");
            break;
        }
    }
}