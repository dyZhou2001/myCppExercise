//
// Created by zdy2001 on 2023/10/23.
//

#ifndef EX3_GOLF_H
#define EX3_GOLF_H
#include <iostream>
#include <string>

using std::string;
class Golf{
private:
    std::string fullName;
    int handicap;
public:
    Golf(){fullName="",handicap=0;};
    Golf(const string & name,const int handi=0);
    void setgolf(const string & name,const int handi=0);
    void show() const;
};

#endif //EX3_GOLF_H
