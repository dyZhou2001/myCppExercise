#include<iostream>
#include<string>
using namespace std;

struct bop
{
    string fullName;
    string title;
    string bopName;
    int preference;
};

int main(){
    bop fullList[]={
        {"Lyy","pishen","pipi",2},
        {"Hz","capiter","tiemin",1},
        {"Zdy","shezhang","tudou",0}
    };
    char n;
    cout<<"Please choose:"<<endl;
        cout<<"a. display by name"<<endl;
        cout<<"b. display by title"<<endl;
        cout<<"c. display by neckname"<<endl;
        cout<<"d. display by preferance"<<endl;
        cout<<"q. quit"<<endl;
    while ((cin>>n)&&!(n=='q'))
    {   
        switch (n)
        {
        case 'a':
            for(auto x:fullList){
                cout<<x.fullName<<endl;
            }
            break;
        case 'b':
            for(auto x:fullList){
                cout<<x.title<<endl;
            }
            break;
        case 'c':
        for(auto x:fullList){
            cout<<x.bopName<<endl;
        }
        break;
        case 'd':
            for(auto x:fullList){
                if (x.preference==0) cout<<x.fullName<<endl;
                if (x.preference==1) cout<<x.title<<endl;
                if (x.preference==2) cout<<x.bopName<<endl;
            }
            break;
        default:
        cout<<"Please enter a,b,c,d,or q"<<endl;
            break;
        }
        cout<<"Please choose:"<<endl;
        cout<<"a. display by name"<<endl;
        cout<<"b. display by title"<<endl;
        cout<<"c. display by neckname"<<endl;
        cout<<"d. display by preferance"<<endl;
        cout<<"q. quit"<<endl;
        
    }
    


}