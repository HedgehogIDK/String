#include "String.h"

void String::input() {
    cin.ignore();
    printf("������� ������: ");
    gets_s(str, SIZE);
}
void String::output() const {
    printf("\n %s \n", str);
}