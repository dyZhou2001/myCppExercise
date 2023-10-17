#include<iostream>
#include<vector>
using namespace std;
const int MAX_SCORE_NUM=10;
void inputProcess(vector<double> &p);
void showScore(vector<double> const p);
void calAverage(vector<double> const p);
int main(){
    vector<double> scoreList;
    inputProcess(scoreList);
    showScore(scoreList);
    calAverage(scoreList);
}
void inputProcess(vector<double> &p){
    cout<<"Please input your scores(max of 10 scores). Press 'q' to quit:"<<endl;
    double score;
    for (int  i = 0; (cin>>score)&&!(score=='q')&&(i < MAX_SCORE_NUM); i++)
    {
        p.push_back(score);
    }
}

void showScore(vector<double> p){
    cout<<"here is your scores:"<<endl;
    for (auto x:p){
        cout<<x<<"  ";
    }
    cout<<endl;
}
void calAverage(vector<double> p){
    cout<<"here is your average score:"<<endl;
    double all=0;
    for(auto x:p){
        all+=x;
    }
    double average=all/p.size();
    cout<<"average score="<<average<<endl;
}
