#include "String.h"

int main() {
    setlocale(LC_ALL, "RUS");

    int size = 50;

    String str;        
    String str2(size);  
    String str3("HoI4");
    String str4{ String{5,"GTA6"} };

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

    printf("������ 4 : ");
    str4.output();

    return 0;
}