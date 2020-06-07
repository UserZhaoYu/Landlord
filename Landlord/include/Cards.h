#ifndef CARDS_H
#define CARDS_H
#include<vector>
#include<iostream>
#include<time.h>
//#include<stdlib.h>
#include<algorithm>
using namespace std;

class Cards
{
    public:
        Cards();
        virtual ~Cards();

//        vector<string *> get_pile(){return pile;}
        int get_nowCard(){return nowCard;}
        void set_nowCard(int _nowCard){nowCard = _nowCard;}
        string* draw();//发牌，返回一组牌面
        void shuffle();//洗牌

    protected:

    private:

        vector<string *> pile;//初始牌堆
        string* card = nullptr;//牌面[数字, 花色]
        int newPile[54];//洗完的牌序
        int nowCard = 0;//当前牌index

};

#endif // CARDS_H
