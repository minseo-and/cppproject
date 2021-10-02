#include "CMyString.h"
#include <string.h>
#include <iostream>

CMyString::CMyString(): m_nLength(0), m_pszData(nullptr)
{
}

CMyString::~CMyString()
{
}

int CMyString::SetString(const char* pszParam)
{
    this->Release();
    if(pszParam == nullptr) {
        this->m_nLength = 0;
        this->m_pszData = nullptr;

        return 0;
    }
    this->m_nLength = strlen(pszParam);
    if(m_nLength != 0) {
        this->m_pszData = new char[this->m_nLength + 1];
        strcpy(this->m_pszData, pszParam);
    }
    else {
        this->m_pszData = nullptr;
    }
    return 0;
}

const char * CMyString::GetString() const {
    if(this->m_pszData == nullptr)
        return "CMyString is Empty";
    return this->m_pszData;
}

void CMyString::Release()
{
    if(this->m_pszData != nullptr) {
        delete[] this->m_pszData;
        this->m_pszData = nullptr;
    }
}