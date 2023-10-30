//
// Created by zdy2001 on 2023/10/25.
//
#include <cmath>
#include "vecto.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTO{
    const double radToDeg=45.0/atan(1.0);
    double Vecto::magval() const {
        return sqrt(x*x+y*y);
    }

    double Vecto::angval() const {
        if (x == 0.0 && y == 0.0) return 0.0;
        else return atan2(y, x);
    }
    void Vecto::set_x(double mag,double ang) {
        x= mag*cos(ang);
    }
    void Vecto::set_y(double mag,double ang) {
        y=mag* sin(ang);
    }
    Vecto::Vecto() {
        x=y=0.0;
        mode=RECT;
    }
    Vecto::Vecto(double n1,double n2,Mode form) {
        mode=form;
        if (form==RECT){
            x=n1;
            y=n2;
        }
        else if (form==POL){
            double temp=n2/radToDeg;
            set_x(n1,temp);
            set_y(n1,temp);
        }
        else{
            cout<<"Incorrect argument.---";
            cout<<"vector set to 0.\n";
            x=y=0.0;
            mode=RECT;
        }
    }
    void Vecto::reset(double n1, double n2, VECTO::Vecto::Mode form) {
        mode=form;
        if (form==RECT){
            x=n1;
            y=n2;
        } else if (form==POL){
            double temp=n2/radToDeg;
            set_x(n1,temp);
            set_y(n1,temp);
        } else{
            cout<<"Incorrect argument.---";
            cout<<"vector set to 0.\n";
            x=y=0.0;
            mode=RECT;
        }
    }
    Vecto::~Vecto(){};
    void Vecto::polar_mode() {
        mode=POL;
    }
    void Vecto::rect_mode() {
        mode=RECT;
    }
    Vecto Vecto::operator+(const VECTO::Vecto &b) const {
        return Vecto(x+b.x,y+b.y);
    }
    Vecto Vecto::operator-(const VECTO::Vecto &b) const {
        return Vecto(x-b.x,y-b.y);
    }
    Vecto Vecto::operator-() const {
        return Vecto(-x,-y);
    }
    Vecto Vecto::operator*(double n) const {
        return Vecto(n*x,n*y);
    }
    Vecto operator*(double n,const Vecto& a){
        return a*n;
    }
    std::ostream &operator<<(std::ostream &os,const Vecto &v){
        if (v.mode==Vecto::RECT) {
            os << "(x,y)=(" << v.x <<","<< v.y << ")";
        }
        else if (v.mode==Vecto::POL){
            os<<"(m,a)==("<<v.magval()<<","<<v.angval()*radToDeg<<")";
        }
        else {
            os << "Invalid";
        }
        return os;
    }
}