#include<iostream>
#include<cctype>
#include<array>
#include<string>
// 编写一个程序，最多将 10个 donation 值读入到一个 double 数组中(如果您愿意，也可使用模板类 array)。
// 程序遇到非数字输入时将结束输入，并报告这些数字的平均值
using namespace std;
int main(){
    int const MAX_NUM_OF_DOUBLR_ARRAY=10;
    array<double,MAX_NUM_OF_DOUBLR_ARRAY> my_array;
    double num;
    int count=0;
    cout<<"please input:"<<endl;
    while ((cin>>num)&&count<10)
    {
        cout<<"ok    "<<num<<endl;
        my_array[count]=num;
        count++;
    }
    double all=0;
    for(auto x:my_array){
        all+=x;
    }
    double average=all/count;
    cout<<count<<"\n";
    cout<<"average:"<<average<<endl;
    
}