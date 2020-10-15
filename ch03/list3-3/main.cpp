#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    s="This is a ";
    s.append("pen.");
    cout<<s<<endl;
    cout<<"文字の長さ"<<s.length()<<endl;
    printf("char*:%s\n", s.c_str()); //c_str:stringの文字列をchar型の配列に変換することが可能です。
    return 0;
}