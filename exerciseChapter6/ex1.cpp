#include<iostream>
#include<cctype>
using namespace std;
//this program get input from keyboard until meet "@"
//then output them except number 
//The program replaces uppercase characters with lowercase characters 
//and replaces lowercase characters with uppercase characters

int main(){
    char ch;
    while ((ch=cin.get())&&!(ch=='@'))
    {
        if (isalpha(ch)){
            if (isupper(ch))
            {
                ch=tolower(ch);
            }
            else if (islower(ch))
            {
                ch=toupper(ch);
            }
            cout<<ch;
            
            
        }
    }
    return 0;
}

