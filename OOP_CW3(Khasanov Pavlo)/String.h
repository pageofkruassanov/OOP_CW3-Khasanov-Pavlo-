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

    ~String();

    void inputString();

    void displayString();

    int getLength();

    void strcopy(String& obj);

    static int getCount();
};