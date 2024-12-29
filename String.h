#pragma once
#include <iostream>

using namespace std;

class String {
private:
    char* str;
    int size;

public:
    static int count;

    String() : str{ new char[80] }, size{ 80 } { count++; }
    String(const char* strUser);
    String(int sizeUser) :str{ new char[sizeUser] }, size{ sizeUser } { count++; };
    String(int sizeUser, const char* strUser);

    
    String(String& User);
    String(String&& obj)noexcept;

    void input();
    void output() const;

    static int getCount() { return count; }

    ~String();
};