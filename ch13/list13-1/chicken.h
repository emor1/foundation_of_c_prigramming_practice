#ifndef _CHICKEN_H_
#define _CHICKEN_H_

#include "bird.h"

class CChicken: public CBird{
    public:
        // 鳴く関数（仮想関数）
        void sing(){
            cout<<"コケコッコー"<<endl;
        }

        // 飛ぶ関数
        void fly(){
            cout<<"ニワトリは飛べません"<<endl;
        }
};

#endif