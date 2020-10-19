#include "Position.h"

void Position::resetPosition(){
    init();
}

void Position::move(int dx,int dy){
    m_x+=dx;
    m_y+=dy;
}