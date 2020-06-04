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
        vector<char *> get_pile(){return pile;}
        void showCards(const vector<char * >&);//显示牌

    protected:

    private:

        vector<char *> pile;//牌堆
        char card[2];//牌面[数字, 花色]
        int now;//当前牌index

};

#endif // CARDS_H
