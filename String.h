#pragma once
#include <iostream>

using namespace std;

class String {
private:
    char* str;
    int size;

public:
    static int count;

    //Êîíñòðóêòîðû

    String() : str{ new char[80] }, size{ 80 } { count++; }
    explicit String(const char* strUser);
    explicit String(int sizeUser) :str{ new char[sizeUser] }, size{ sizeUser } { count++; };
    String(int sizeUser, const char* strUser);

    //Êîíñòðóêòîð êîïèðîâàíèÿ 
    String(String& User)noexcept;
    //Êîíñòðóêòîð ïåðåíîñà
    String(String&& obj)noexcept;

    //Àêññåñîðû
    void input();
    void output() const;

    static int getCount()noexcept { return count; }

    //Äåñòðóêòîð
    ~String()noexcept;
};
