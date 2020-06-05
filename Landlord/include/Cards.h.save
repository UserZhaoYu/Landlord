#ifndef CARDS_H
#define CARDS_H
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
        void showCards(const vector<string * >&);//显示牌

    protected:

    private:

        vector<string *> pile;//牌堆
        string* card = nullptr;//牌面[数字, 花色]
        int now;//当前牌index

};

#endif // CARDS_H
