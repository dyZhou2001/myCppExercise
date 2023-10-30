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
        Mode mode;
        void set_x(double n1,double n2);
        void set_y(double n1,double n2);
    public:
        Vecto();
        Vecto(double n1,double n2,Mode form=RECT);
        void reset(double n1,double n2,Mode form=RECT);
        ~Vecto();
        double xval() const{return x;};
        double yval() const{return y;};
        double magval()const;
        double angval()const;
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
