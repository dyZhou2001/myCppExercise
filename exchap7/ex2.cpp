#include<iostream>
using namespace std;
const int MAX_SCORE_NUM=10;
void inputProcess(double *p);
void showScore(double* p);
void calAverage(double* p);
int main(){
    double scoreList[MAX_SCORE_NUM]={0};
    inputProcess(scoreList);
    showScore(scoreList);
    calAverage(scoreList);
}
void inputProcess(double *p){
    cout<<"Please input your scores(max of 10 scores). Press 'q' to quit:"<<endl;
    double score;
    for (int  i = 0; (cin>>score)&&!(score=='q')&&(i < MAX_SCORE_NUM); i++)
    {
        p[i]=score;
    }
}

