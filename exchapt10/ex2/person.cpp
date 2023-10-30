//
// Created by zdy2001 on 2023/10/23.
//

#include "person.h"
#include <cstring>
#include <iostream>
Person::Person(const std::string &ln, const char *fn) {
    strcpy(fname,fn);
    lname=ln;
}

void Person::show() const {
    std::cout<<fname<<","<<lname<<std::endl;
}
void Person::formalShow() const {
    std::cout<<lname<<","<<fname<<std::endl;
}