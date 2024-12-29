#include "String.h"

int main() {
    setlocale(LC_ALL, "RUS");

    int size = 50;

    String str;        
    String str2(size);  
    String str3("HoI4");
    String str4{ String{5,"GTA6"} };

    printf("Введите строку: ");
    str.input();

    printf("Введите строку: ");
    str2.input();

    printf("Кол-во строк созданных: %d\n", String::getCount());

    printf("Строка 1 : ");
    str.output();

    printf("Строка 2 : ");
    str2.output();

    printf("Строка 3 : ");
    str3.output();

    printf("Строка 4 : ");
    str4.output();

    return 0;
}