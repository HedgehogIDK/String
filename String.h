#pragma once
#include <iostream>

using namespace std;

class String {
private:
    char* str;
    int SIZE;

public:
    static int count;

    String() : SIZE{ 80 }, str{ new char[SIZE] } {
        count++;
    }

    String(int size) : SIZE{ size }, str{ new char[size] } {
        count++;
    }

    String(const char* strUser) {
        SIZE = strlen(strUser) + 1;
        str = new char[SIZE];
        strcpy_s(str, SIZE, strUser);
        count++;
    }

    String(const String& strUser) : SIZE{ strUser.SIZE }, str{ new char[strUser.SIZE] } {
        strcpy_s(str, strUser.SIZE, strUser.str);
        count++;
    }

    void input() {
        gets_s(str, SIZE);
    }

    void output() const {
        printf("\n%s\n", str);
    }

    static int getCount() {
        return count;
    }

    ~String() {
        delete[] str;
        count--;
    }
};