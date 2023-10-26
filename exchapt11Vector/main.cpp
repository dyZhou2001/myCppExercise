#include <iostream>
#include "vecto.h"
#include <cstdlib>
#include <ctime>
int main() {
    using namespace std;
    using VECTO::Vecto;
    srand(time(0));
    double direction;
    Vecto step;
    Vecto result(0.0,0.0);
    unsigned long steps=0;
    double target;
    double dstep;
    cout<<"Enter target distance (q to quit): ";
    while (cin>>target){
        cout<<"Enter step length: ";
        if(!(cin>>dstep))
            break;
        while (result.magval()<target){
            direction=rand();
            step.reset(dstep,direction,Vecto::POL);
            result=result+step;
            steps++;
        }
        cout<<"After "<<steps<<"steps, the subject hans the following location:\n";
        cout<<result<<endl;
        result.polar_mode();
        cout<<"or\n"<<result<<endl;
        cout<<"Average outward distance per step = "
        <<result.magval()/steps<<endl;
        steps=0;
        result.reset(0.0,0.0);
        cout<<"Enter target distance (q to quit): ";
    }
    cout<<"Bye!\n";
    cin.clear();
    while (cin.get()!='\n')
        continue;
    return 0;
}
