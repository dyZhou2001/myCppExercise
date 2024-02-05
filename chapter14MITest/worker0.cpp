//
// Created by zdy2001 on 2023/10/30.
//
#include "worker0.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::getline;

Worker::~Worker(){}
void Worker::Set() {
    cout<<"Enter worker's name: ";
    getline(cin,fullname);
    cout<<"Enter worker's ID: ";
    cin>>id;
    while (cin.get()!='\n')
        continue;
}
void Worker::Show() const {
    cout<<"Name: "<<fullname<<"\n";
    cout<<"Employee ID: "<<id<<endl;
}

char* Singer::pv[]={"other","alto","contralto",
                    "soprano","bass","bariton","tensor"};

void Singer::Set() {
    Worker::Set();
    cout<<"Enter number for singer's vocal range:\n";
    int i;
    for (i = 0; i < Vtypes; ++i) {
        cout<<i<<": "<<pv[i]<<"    ";
        if (i%4==3) cout<<endl;
    }
    if(i%4!=0) cout<<endl;
    while (cin>>voice&&(voice<0||voice>=Vtypes))
        cout<<"Please enter a value>=0 and<"<<Vtypes<<endl;
    while (cin.get()!='\n')
        continue;

    }
    void Singer::Show() const {
    cout<<"Category: singer\n";
    Worker::Show();
    cout<<"Vocal range: "<<pv[voice]<<endl;
}