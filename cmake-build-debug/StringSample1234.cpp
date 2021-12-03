#include <iostream>
#include "CMyString.h"

using namespace std;

int main() {
    int choose(0);

    int a, b;
    cout << "학년 반 설정" << endl;
    cout << "학년 : ";
    cin >> a;
    cout << "반 : ";
    cin >> b;
    CMyStringEx* List = new CMyStringEx(a, b);

    while (1) {
        List->Menu();
        cin >> choose;

        switch (choose) {
            case 0:
                List->Unlock();
                cout << "프로그램 종료" << endl;
                return 0;
            case 1:
                List->Insert();
                break;
            case 2:
                List->Print();
                break;
            case 3:
                List->Delete();
                break;
            case 4:
                List->GetInfo();
                break;
            default:
                cout << "재입력 필요" << endl;
        }
    }
}