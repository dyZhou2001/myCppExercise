//
// Created by zdy2001 on 2023/10/24.
//

#ifndef EXCHAPT11VECTOR_VECTO_H
#define EXCHAPT11VECTOR_VECTO_H
#include <iostream>
namespace VECTO{
    class Vecto{
    public:
        enum Mode {RECT,POL};
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vecto();
        Vecto(double n1,double n2,Mode form=RECT);
        void reset(double n1,double n2,Mode form=RECT);
        ~Vecto();
        double xval() const{return x;};
        double yval() const{return y;};
        double magval()const{return mag;};
        double angval()const{return ang;};
        void polar_mode();
        void rect_mode();
        //operator overloading
        Vecto operator+(const Vecto &b) const;
        Vecto operator-(const Vecto &b) const;
        Vecto operator-() const;
        Vecto operator*(const double n) const;
        //friends
        friend Vecto operator*(double n,const Vecto& a);
        friend std::ostream &operator<<(std::ostream &os,const Vecto & v);
    };
}
#endif //EXCHAPT11VECTOR_VECTO_H
