#include<iostream>
#include"sample.h"

using namespace std;

int main(){
    CSample obj;//CSampleをインスタンス化
    int num;

    cout<<"整数を入力してください："<<endl;
    cin>>num;

    obj.set(num);//CSampleのメンバ変数をセット
    cout<<obj.get()<<endl;

    return 0;
}

/*
それぞれ別でコンパイルして、あとでつなげる
 g++ -c .\sample.cpp
 g++ -c .\main.cpp
 g++ .\main.o .\sample.o  
*/