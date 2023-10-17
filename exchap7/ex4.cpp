// 许多州的彩票发行机构都使用如程序清单 7.4 所示的简单彩票玩法的变体。
// 在这些玩法中，玩家从一组被称为城号码(fieldnumber)的号码中选择几个。例如，可以从域号码1~47中选择5个号码;
// 还可以从第二个区间(如1~27)选择一个号码(称为特选号码)。
// 要赢得头奖，必须正确猜中所有的号码。
// 中头奖的几率是选中所有域号码的几率与选中特选号码几率的乘积。
// 例如，在这个例子中，中头奖的几率是从47个号码中正确选取5个号码的几率与从27 个号码中确选择1个号码的几率的乘积。
// 本程序计算这种彩票中奖的概率。


#include<iostream>
using namespace std;
long double probability(int numbers, int picks);
int main(){
    long double probabilityOf47And27;
    probabilityOf47And27=probability(47,5)*probability(27,1);
    cout<<"you have one chance in "<<probabilityOf47And27<<" of winning!";

}

long double probability(int numbers, int picks){
    long double result=1; 
    for (numbers,picks;picks>0;numbers--,picks--){  //attention： 一种稍微复杂的for循环。
        result=result*numbers/picks;  //tricks : 交叉乘除而不是一直连乘或连除的好处是可以减少舍入误差或数值溢出。
    }
    return result;
}