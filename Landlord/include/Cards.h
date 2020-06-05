#ifndef CARDS_H
#define CARDS_H
#include<LandOwner.h>
#include<vector>
#include<iostream>
using namespace std;

class Cards
{
    public:
        Cards();
        virtual ~Cards();
        void shuffle();//洗牌
        vector<string *> get_pile(){return pile;}
        int get_nowCard(){return nowCard;}
        void set_nowCard(int _nowCard){nowCard = _nowCard;}
        string* draw();//发牌，返回一组牌面

    protected:

    private:

        vector<string *> pile;//牌堆
        string* card = nullptr;//牌面[数字, 花色]
        int nowCard = 0;//当前牌index

};

#endif // CARDS_H
