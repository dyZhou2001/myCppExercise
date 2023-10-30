//
// Created by zdy2001 on 2023/10/23.
//
#include "golf.h"
Golf::Golf(const std::string &name, const int handi) {
    fullName=name;
    handicap=handi;
}

void Golf::setgolf(const std::string &name, const int handi) {
    fullName=name;
    handicap=handi;
}

void Golf::show() const {
    std::cout<<"name:"<<fullName<<"   handicap:"<<handicap<<std::endl;
}