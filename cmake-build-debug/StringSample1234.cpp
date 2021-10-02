#include <iostream>
#include "CMyString.h"  // CMyString 클래스 사용을 위해 헤더파일 추가
using namespace std;
void TestFunc(const CMyString& param)
{
    cout << param.GetString() << endl;
}
int main()
{
    CMyString strData1;

    cout << strData1.GetString() << endl;
    strData1.Release();
    cout << strData1.GetString() << endl;

    CMyString strData2;
    strData2.SetString("Test Code 1");
    cout << strData2.GetString() << endl;
    strData2.Release();

    CMyString strData3;
    strData3.SetString("Test Code 2");
    cout << strData3.GetString() << endl;
    strData3.Release();

    strData3.SetString("");
    strData3.SetString("Hello World");
    strData3.SetString("Test Code 3");
    cout << strData3.GetString() << endl;
    strData3.Release();

    strData3.SetString("Hello World");
    TestFunc(strData3);
    cout << strData3.GetString() << endl;
    strData3.Release();

    return 0;
}