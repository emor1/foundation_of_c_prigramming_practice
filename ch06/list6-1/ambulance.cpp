#include "ambulance.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance() : m_number(119)
{
    cout<<"CAmbulanceオブジェクト生成"<<endl;
}

CAmbulance::~CAmbulance()
{
    cout<<"CAmbulanceオブジェクト破棄"<<endl;
}

void CAmbulance::savePeople(){
    cout<<"救急活動"<<endl<<"呼び出し"<<m_number<<"番"<<endl;
}