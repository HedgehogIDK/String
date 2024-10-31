#include "String.h"

void String::input() {
    cin.ignore();
    printf("¬ведите строку: ");
    gets_s(str, SIZE);
}
void String::output() const {
    printf("\n %s \n", str);
}