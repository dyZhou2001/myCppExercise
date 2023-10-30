#include <iostream>
#include "person.h"

int main() {
    Person one;
    Person two("zdy");
    Person three("YY","K");
    one.show();
    one.formalShow();
    two.show();
    two.formalShow();
    three.show();
    three.formalShow();
    return 0;
}
