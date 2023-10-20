#include <iostream>
using namespace std;
const int SLEN =30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
//getinfo() has two arguments:
// a pointer to the first element of 
//an array of student structures and an int representing the
//number of elements of the array. 
// The function solicits and stores data about students.
// It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. 
//The function returns the actual number of array elements filled.
// displayl() takes a student structure as an argument
//and displays its contents void displayl(student st);
// display2() takes the address of student structure as an
//argument and displays the structure's contents
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arquments and displays the contents of the structures
int getinfo(student pa[],int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[],int n);

int main(){
    cout<<"Enter class size:"<<endl;
    int classSize;
    cin>>classSize;
    while (cin.get()!='\n')
    {
        continue;
    }
    student* ptrStudent=new student[classSize];
    int entered=getinfo(ptrStudent, classSize);
    cout<<"entered:"<<entered<<endl;
    for (int i = 0; i < entered; i++)
    {
        display1(ptrStudent[i]);
        display2(&ptrStudent[i]);
    }
    display3(ptrStudent,entered);
    delete[]    ptrStudent;
    cout<<"done \n"<<endl;
    return 0;
    
    
}
int getinfo(student pa[],int n){
    int i=0;
    cout<<"--------------ENTER BEGIN--------------"<<endl;
    for ( i ; i < n; i++){
        cout<<"Student NO."<<i+1<<" :"<<endl;
        cout<<"Name :";
        cin.getline(pa[i].fullname,SLEN);
        if (pa[i].fullname[0]=='\0'||pa[i].fullname[0]==' ')
        {
            break;
        }
        cout<<"hobby :";
        cin.getline(pa[i].hobby,SLEN);
        cout<<"Ooplevel :";
        (cin>>pa[i].ooplevel).get();
        cout<<'\n';
    }
    return i;
    
}
void display1(student st){
        cout<<"Name :";
        cout<<st.fullname<<endl;
        cout<<"hobby :";
        cout<<st.hobby<<endl;;
        cout<<"Ooplevel :";
        cout<<st.ooplevel<<endl;
        
}
void display2(const student * ps){
    cout<<"Name :";
    cout<<ps->fullname<<endl;
    cout<<"hobby :";
    cout<<ps->hobby<<endl;;
    cout<<"Ooplevel :";
    cout<<ps->ooplevel<<endl;
}
void display3(const student pa[],int n){
    for (int i=0 ; i < n; i++)
    {
        cout<<"Student NO."<<i+1<<" :"<<endl;
        cout<<"Name :";
        cout<<pa[i].fullname<<endl;
        cout<<"hobby :";
        cout<<pa[i].hobby<<endl;;
        cout<<"Ooplevel :";
        cout<<pa[i].ooplevel<<endl;
    }

}