#include <iostream>
#include "Sample.h"
#include <string>

using namespace std;

int main(){
    CSample s;
    cout<<"定数"<<s.m_cst<<endl;
    s.setStr("ABC");
    cout<<s.getStr()<<endl;
    return 0;
}