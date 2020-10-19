#ifndef _POSITION_H_
#define _POSITION_H_

#include "Vector2D.h"

class Position : public Vector2D{
    public:
        void resetPosition();

        void move(int dx,int dy);
};

#endif