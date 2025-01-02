#pragma once
#include <iostream>

using namespace std;

class String {
private:
    char* str;
    int size;

public:
    static int count;

    //Конструкторы

    String() : str{ new char[80] }, size{ 80 } { count++; }
    String(const char* strUser);
    String(int sizeUser) :str{ new char[sizeUser] }, size{ sizeUser } { count++; };
    String(int sizeUser, const char* strUser);

    //Конструктор копирования 
    String(String& User);
    //Конструктор переноса
    String(String&& obj)noexcept;

    //Акссесоры
    void input();
    void output() const;

    static int getCount() { return count; }

    //Деструктор
    ~String();
};