//
// Created by zdy2001 on 2023/10/23.
//

#ifndef EXCHAPT10_PERSON_H
#define EXCHAPT10_PERSON_H
#include <string>
using std::string;
class Person{
private:
    static const int LIMIT=25;
    std::string lname;
    char fname[LIMIT];
public:
    Person(){lname="";fname[0]='\0';};
    Person(const string & ln,const char* fn="Heyyou");
    void show() const;
    void formalShow() const;


};

#endif //EXCHAPT10_PERSON_H
