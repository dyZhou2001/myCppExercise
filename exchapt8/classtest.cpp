#include<iostream>
using namespace std;
class classtest
{
private:
    int ID;
public:
    classtest(int ID);
    ~classtest();
};

classtest::classtest(int ID)
{
}

classtest::~classtest()
{
}

int main(){
    classtest* Array[10];
    int i=10;
    int *p1=&i;
    int *p2;
    cout<<p1<<" "<<p2<<endl;
    *p2=*p1;
    *p1=20;
    cout<<*p1<<" "<<*p2<<endl;
    cout<<p1<<" "<<p2<<endl;
    int*p3=p1;
    cout<<p3<<" "<<*p3<<endl;
    int &r=i;
    p3=&r;
    cout<<p3;
}