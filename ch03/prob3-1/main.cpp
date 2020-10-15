#include<iostream>
#include"data.h"

using namespace std;

int main(){
    CData d;
    d.init();
    d.setNumber(100);
    d.setComment("Progeamming C++");
    cout<<"number="<<d.getNumber()<<" comment="<<d.getComment()<<endl;
    return 0;
}