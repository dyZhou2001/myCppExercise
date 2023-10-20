#include<iostream>
#include<cstring>
using namespace std;

template<typename T> T maxn(T arr[],int n);
template <> char* maxn(char* arr[],int n);

int main(){
    int arr1[]={1,9,4,5,2,6};
    double arr2[]={9.3,2.4,1.5,8.8};
    char ch1[]="the first ch array.";
    char ch2[]="the second ch array.";
    char ch3[]="the third ch array...";
    char ch4[]="the forth ch array...";
    char ch5[]="the fifth ch array";
    char* arr3[]={ch1,ch2,ch3,ch4,ch5};
    cout<<maxn(arr1,6)<<endl;
    cout<<maxn(arr2,4)<<endl;
    cout<<maxn(arr3,5)<<endl;

}

template<typename T> T maxn(T arr[],int n){
    T max;
    max=arr[n-1];
    for (int i=n-2; i>=0; i--)
    {
        if (max<=arr[i])
        {
            max=arr[i];
        }
        
    }
    return max;
    
}
template <> char* maxn(char* arr[],int n){
    int max;
    max=strlen(arr[n-1]);
    char* ch=nullptr;
    for (int i=n-2; i>=0; i--)
    {
        if (max<=strlen(arr[i]))
        {
            ch=arr[i];
            max=strlen(arr[i]);
        }
        
    }
    return ch;
}