#ifndef _BIRD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

using namespace std;

class CBird{
    public:

        // 鳴く関数（仮想関数）
        virtual void sing(){
            cout<<"取りが鳴きます"<<endl;
        }
        // 飛ぶ関数
        void fly(){
            cout<<"鳥が飛びます"<<endl;
        }
};

#endif