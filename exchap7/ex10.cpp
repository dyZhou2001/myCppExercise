//an exercise for 函数指针

#include<iostream>
using namespace std;
typedef double (*pf)(double x,double y);
double add(double x,double y);
double multi(double x, double y);
double minu(double x , double y);
double calcu(double x, double y, pf);


int main(){
    double x=2.5;
    double y=3.5;
    calcu(x,y,add);
    calcu(x,y,minu);
    calcu(x,y,multi);
    pf pa[3]={add,multi,minu};
    pf* ptr=pa;
    cout<<"以下是函数指针列表的输出"<<endl;
    for (int  i = 0; i < 3; i++)
    {   
        
        calcu(x,y,*(ptr+i));
    }
    

}


double add(double x,double y){
    double result=x+y;
    return result;
}
double multi(double x, double y){
    double result=x*y;
    return result;
}
double minu(double x , double y){
    double result=x-y;
    return result;
}
double calcu(double x, double y, pf func){
    double result=func(x,y);
    cout<< result<<endl;
    return result;
}