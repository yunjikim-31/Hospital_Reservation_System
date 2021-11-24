#include <windows.h>      // 콘솔창 변경 API
#include <stdio.h>
#pragma once
using namespace std;

// 글씨 흰색으로 만듦
void TextColor(int color_number)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void PrintMenu()
{
    system("cls");

    printf("%c[1;33m", 27);      // 색 변경 코드, 노란색
    printf("========================================\n\n");
    printf("%c[0m\n", 27);      //원래의 색으로 변경

    printf("%c[1;32m", 27);      // 색 변경 코드, 초록색,  27은 ESC키 출력
    printf("     환자 예약 관리 프로그램\n\n");
    printf("%c[0m\n", 27);      //원래의 색으로 변경

    TextColor(15);
    printf("1. 응급 환자 조회\n2. 예약 일정 확인 및 변경\n3. 환자 기록 열람\n4. 프로그램 종료");

    printf("%c[1;33m", 27);      // 색 변경 코드, 노란색
    printf("\n========================================\n");
    printf("%c[0m\n", 27);      //원래의 색으로 변경

    TextColor(15);      // 하얀색 폰트로 설정 
    printf("메뉴를 선택해주세요 : ");

}