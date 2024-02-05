#include <iostream>
#include "TextQuery.h"
using namespace std;
int main() {
    ifstream file;
    file.open("../testQuery.txt");
    if (file.is_open()) cout<<"everything is ok"<<endl;
    TextQuery tq(file);
    while (true){
        cout<<"Enter word to look for, or 'q' to quit: ";
        string s;
        if(!(cin>>s)||s=="q") break;
        print(cout,tq.query(s))<<endl;

    }
}
