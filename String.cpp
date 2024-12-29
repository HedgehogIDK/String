#include "String.h"

int String::count = 0;

void String::input() {
    gets_s(str, size);
}

void String::output() const {
    printf("\n%s\n", str);
}

String::String(const char* strUser) {
    size = strlen(strUser) + 1;
    str = new char[size];
    strcpy_s(str, size, strUser);
    count++;
}

String::String(int sizeUser, const char* strUser) :str{ new char[sizeUser] }, size{ sizeUser } {
    strcpy_s(str, size, strUser);
    count++;
}

String::String(String&& obj)noexcept {
    size = obj.size;
    str = obj.str;
    obj.str = nullptr;
    count++;
}

String::String(String& User) {
    size = User.size;
    str = new char[size];
    strcpy_s(str, User.size, User.str);
}

String::~String() {
    delete[] str;
    count--;
}