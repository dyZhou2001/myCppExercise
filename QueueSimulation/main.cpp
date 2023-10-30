#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Queue.h"
const int MIN_PER_HR=60;
bool newCustomer(double x);
int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    std::srand(std::time(0));
    cout<<"Case Study: Bank of Heather Automatic Teller \n";
    cout<<"Enter maximum size of queue:";
    int qs;
    cin>>qs;
    Queue line(qs);
    cout <<"Enter the number of simulation hours:";
    int hours;
    cin>>hours;
    long cycleLimit=hours*MIN_PER_HR;
    cout<<"Enter the average number of customers per hour: ";
    double perHour;
    cin>>perHour;
    double minPerCust=MIN_PER_HR/perHour;
    Item temp;
    long turnaways=0;
    long customers=0;
    long served=0;
    long sumLine=0;
    int waitTime=0;
    long lineWait=0;
    for (int cycle=0;cycle<cycleLimit;cycle++){
        if (newCustomer((minPerCust))){
            if(line.isFull())
                turnaways++;
            else{
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if (waitTime<=0&&!line.isEmpty()){
            line.dequeue(temp);
            waitTime=temp.ptime();
            lineWait+=cycle-temp.when();
            served++;
        }
        if (waitTime>0)
            waitTime--;
        sumLine+=line.queueCount();
    }

    if (customers>0)
    {
        cout << "customers accepted: "<< customers << endl;
        cout <<" customers served: "<<served << endl;
        cout << "turnaways: "<< turnaways<<endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed,ios_base::floatfield);
        cout << (double) sumLine / cycleLimit << endl;
        cout << " average wait time: "<<
            (double) lineWait / served << " minutes \n";

    }
    else
        cout<<"No customers.\n";
    cout<<"Done!\n";
    return 0;
}

bool newCustomer(double x){
    return (std::rand()*x/RAND_MAX<1);
}
