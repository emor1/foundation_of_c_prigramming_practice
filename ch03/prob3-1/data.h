#ifndef __data_h_
#define __data_h_

#include<iostream>
#include<string>

using namespace std;

class CData{
    private:
        int number;
        string comment;
    public:
        void init();
        void setNumber(int num);
        void setComment(string com);
        int getNumber();
        string getComment();
};

#endif