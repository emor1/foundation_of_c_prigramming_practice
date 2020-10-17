#include "rat.h"
#include <iostream>

using namespace std;

int main(){
    CRat *r1,*r2,*r3;
    r1=new CRat();      //1匹目のネズミを生成
    r1->squeak();
    CRat::showNum();
    r2 = new CRat();    //2匹目のネズミを生成
    r3 = new CRat();    //3蟇目のネズミを生成
    r2->squeak();
    r3->squeak();
    delete r1;          //1匹目のネズミを削除
    delete r2;          //2匹目のネズミを削除
    CRat::showNum();
    delete r3;
    CRat::showNum();
    return 0;
}