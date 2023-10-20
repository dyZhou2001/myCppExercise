//This is a simulation of gamble.
//The rules are:
//1.The probability of winning is 0.2.
//2.I have some money called initMoney.
//3.I set my startMoney at $100.
//3.I put $100 which I call it gameMoney into the game each round, if I win, I get $200 (gmoney*2).
//4.If I win, I continue with the startMoney, or I'll continue with twice the gmoney of last round.
//5.If I get enoughMOney, I'll quit.(I promise.)

#include<iostream>
#include<random>
using namespace std;

bool startGamble();
void calcuMoney(bool result,long double &gmoney);
void showInformation();

double const probability=0.43;
long double iMoney=100000;
long double eMoney=200000;
int const sMoney=100;
long double gmoney=sMoney;
int count=0;
bool result;
default_random_engine e(56928);
uniform_int_distribution<unsigned> u(0,9999); 

int main(){
    cout<<"---------------GAME START---------------"<<endl;
    while (iMoney>0&&iMoney<eMoney)
    {   
        
        result=startGamble();
        calcuMoney(result,gmoney);
        // showInformation();
        if (count%10==0){
            showInformation();
        }
        
    }
    showInformation();


    
}

bool startGamble(){
    count++;
    int randout=u(e);
    
    if (randout<(probability*10000))
    {
        cout<<"You win!"<<endl;
        return true;
    }
    else
    {
        cout<<"You lose, try again."<<endl;
        return false;
    }
    
}
void calcuMoney(bool result,long double &gmoney){
    if (result==true)
    {
        iMoney+=gmoney*2;
        gmoney=sMoney;
    }
    else{
        iMoney-=gmoney;
        gmoney*=2;
    }
    
}
void showInformation(){
    cout<<"Now you have played "<<count<<" rounds, and your information as follow:"<<endl;
    cout<<"Imoney:"<<iMoney<<endl;
    cout<<"gmoney:"<<gmoney<<endl;
}