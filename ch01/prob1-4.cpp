#include<iostream>
#include<string>

using namespace std;

int main(){
    int a;
    string b,c;
    b="数値を入力してください";
    c="を2倍した数は";
    cout <<b<< endl;
    cin>> a;// 標準入出力の入力
    cout<<a<<c<< a*2<<"です"<<endl;
    return 0;
}