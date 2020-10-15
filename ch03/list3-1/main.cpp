#include "sample.h"
#include <iostream>

using namespace std;

int main(){
    Sample s;
    s.a=1; //publicなメンバ変数のaはクラスの外部のmain.cppからアクセス可能
    s.b=2;  //privateなメンバ関数のbはクラスの外部のmain.cppからアクセスできない
    s.func1();
    s.func2();
}

/*
private修飾子がついているメンバ変数、メンバ関数はクラスの外からアクセスすることができない
メンバへのアクセスをそのクラスのメンバ関数からしかアクセスできないようにすることをカプセル化という

ex.
出力例
main.cpp:9:7: エラー: ‘int Sample::b’ is private within this context
    9 |     s.b=2;

main.cpp:11:13: エラー: ‘void Sample::func2()’ is private within this context
   11 |     s.func2();
*/
