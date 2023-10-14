// 编写一个程序，记录捐助给“维护合法权利团体”的资金。
// 该程序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和款项。
// 这些信息被储存在一个动态分配的结构数组中。每个结构有两个成员:
// 用来储存姓名的字符数组(或 string 对象)和用来存储款项的 double 成员。
// 读取所有的数据后程序将显示所有捐款超过 10000 的捐款者的姓名及其捐款数额。
// 该列表前应包含一个标题，指出下面的指款者是重要捐款人(Grand Patrons)。
// 然后，程序将列出其他的捐款者，该列表要以Patrons 开头。如果某种类别没有捐款者，则程序将打印单词“none”。
// 该程序只显示这两种类别，而不进行排序。
// 可以选择从文件中读取所需的信息。该文件的第一项应为捐款人数，余下的内容应为成对的行。在每一对中，第一行为捐款人姓名，第二行为捐款数额。


#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
struct Patrons
{       
    string name;
    double money;
};

int main(){
    ifstream InFile;
    ofstream OutFile;
    cout<<"Please choose input from file(press 0) or form keybord(any other key)."<<endl;
    int n;
    char ch;
    cin>>ch;
    if (ch=='0')
    {
        InFile.open("patron.txt");
        InFile>>n;
        Patrons *p=  new Patrons[n];
        vector<Patrons*> grandPatron;
        vector<Patrons*> patrons;
        for(int i=0;i<n;i++){
            InFile>>p[i].name;
            InFile>>p[i].money;
            if (p[i].money>=10000) grandPatron.push_back(p+i);
            else patrons.push_back(p+i);
        }
        cout<<"important patrons are:"<<endl;
        if (grandPatron.size()==0) cout<<"none"<<endl;
        for(auto x:grandPatron){
            cout<<x->name<<"    "<<x->money<<endl;
        }
        cout<<"patrons are:"<<endl;
        if(patrons.size()==0) cout<<"none"<<endl;
        for(auto x:patrons){
            cout<<x->name<<"    "<<x->money<<endl;
        }
        InFile.close();
        delete []p;
    }
    else{
        OutFile.open("patron.txt");
        cout<<"please enter the number you want to input.";
        cin>>n;
        OutFile<<n<<endl;
        Patrons *p=  new Patrons[n];
        vector<Patrons*> grandPatron;
        vector<Patrons*> patrons;
        cout<<"now you can input the information."<<endl;
        for(int i=0;i<n;i++){
            cout<<"name:";
            cin>>p[i].name;
            cout<<"money:";
            cin>>p[i].money;
            OutFile<<p[i].name<<endl<<p[i].money<<endl;
            if (p[i].money>=10000) grandPatron.push_back(p+i);
            else patrons.push_back(p+i);
        }
        cout<<"important patrons are:"<<endl;
        if (grandPatron.size()==0) cout<<"none"<<endl;
        for(auto x:grandPatron){
            cout<<x->name<<"    "<<x->money<<endl;
        }
        cout<<"patrons are:"<<endl;
        if(patrons.size()==0) cout<<"none"<<endl;
        for(auto x:patrons){
            cout<<x->name<<"    "<<x->money<<endl;
        }
        OutFile.close();
        delete []p;
    }
    
    
}