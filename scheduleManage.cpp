#include "main.cpp"
#pragma once

// 예약 일정 관리, 외부 클래스 정의
void Doctor::Schedule()
{
    cout << "\n오늘의 예약 일정입니다. : \n";

    for (int loop = 0; loop < 5; loop++)
    {
        cout << (loop + 1) << "번 일정" << " : " << sched[loop] << endl;
    }

    f((ID == "hh1111") && (password == "1111")) {
        cout << "Please Enter your Name : ";
        cin >> pt1.name;
        cout << endl;
        cout << "Please Choose a Department / Doctor for your Appointment\n";
        cout << "Click 1 for GENERAL MEDICINE - Dr. Sushma\n";
        cout << "Click 2 for PSYCHIATRY - Dr. Kiruba\n";
        cout << "Click 3 for DERMATOLOGY - Dr. Shreya\n";
        cout << "Click 4 for LAPAROSCOPIC SURGERY - Dr. Jothi\n";
        cout << "Click 5 for DENTISTRY - Dr. Mary\n";

        cout << "\nPlease Enter your Choice : ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "\nPlease choose an Appointment Slot\n";
            cout << "Click 1 for Slot 1 : 5:00 to 5:30 pm\n";
            cout << "Click 2 for Slot 2 : 5:30 to 6:00 pm\n";
            cout << "Click 3 for Slot 3 : 6:00 to 6:30 pm\n";
            cout << "Click 4 for Slot 4 : 6:30 to 7:00 pm\n";
            cout << "Click 5 for Slot 5 : 7:00 to 7:30 pm\n";

            cin >> slot;
            Sushma.edit_schedule(slot, pt1.name);

            break;
        }

    }
}