#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> p={1,2,3,4,5,6,7,8,9};
    //for(auto x:p) cout<<x<<endl;
    
    for (auto it = p.begin(); it <p.end(); it+=2)
    {
        cout<<*it<<endl;
    }
    
}