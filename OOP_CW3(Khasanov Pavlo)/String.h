#pragma once

#include <iostream>

using namespace std;

class String {
private:
    char* str;
    int length;

    static int count;

public:
    String() : String(80) {};

    String(int size);

    String(const char* s);

    String(const String& obj);

    void inputString();

    void displayString();

    int getLength();

    void strcopy(String& obj);

    bool MyStrStr(const char* str);

    int MyChr(char c);
    // MyStrLen возвращает текущее кол-во символов в строке до '\0', не фактически допустимое. Размер строки можно узнать с помощью геттера getLength
    int MyStrLen();

    void MyStrCat(String& b);

    void MyDelChr(char c);

    int MyStrCmp(String& b);

    static int getCount();

    char operator[](int index) const;
    int operator()(char symb) const;
    operator int();

    ~String();
};