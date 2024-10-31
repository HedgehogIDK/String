#pragma once
#include <iostream>

using namespace std;

class String {
private:
    char* str;            
    static int count;
    int SIZE = 80;

public:
    String() : str{ new char[SIZE] } {
        count++;
    }
    String(int size) : str{ new char[size] } {
        SIZE = size;
        count++;
    }
    String(const char* strUser) {
        SIZE = strlen(strUser) + 1;
        str = new char[SIZE];
        strcpy_s(str,SIZE, strUser);
        count++;
    }
    void input();
    void output() const;
    static int getCount() {
        return count;
    }
    ~String() {
        delete[] str;
        count--;
    }
};

