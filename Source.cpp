#include "String.h"

int String::count = 0;

int main() {
    setlocale(LC_ALL, "RUS");

    int size = 50;

    String str;        
    String str2(size);  
    String str3("HoI4"); 

    printf("������� ������: ");
    str.input();

    printf("������� ������: ");
    str2.input();

    printf("���-�� ����� ���������: %d\n", String::getCount());

    printf("������ 1 : ");
    str.output();

    printf("������ 2 : ");
    str2.output();

    printf("������ 3 : ");
    str3.output();

    return 0;
}