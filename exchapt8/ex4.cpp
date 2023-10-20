#include<iostream>
using namespace std;
#include<cstring>
struct stringy
{
    char * str; //points to a string
    int ct; //length of string not counting \0
};

void set(stringy&,const char[]);
void show(const stringy ,const int n=1);
void show(const char[], const int n=1);
int main(){
    stringy beany;
    char testing[]="Reality isn't what it used tp be.";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show("Done!");
}

void set(stringy& str,const char ch[]){
    char *p= new char[strlen(ch)+1];
    strcpy(p,ch);
    str.str=p;
    str.ct=strlen(ch);
}
void show(const stringy str,const int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<str.str<<endl;
    }
    
}
void show(const char str[],const int n){
    for (int  i = 0; i < n; i++)
    {
        cout<<str<<endl;
    }
}


