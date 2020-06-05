#include "LandOwner.h"
#include<vector>
#include<iostream>
using namespace std;

LandOwner::LandOwner(string name, string sex, string phone, string address, string signature):_name(name), _sex(sex), _phone(phone), _address(address), _signature(signature)
{
//    Set_name(name);
//    Set_sex(sex);
    Set_gold(1000);
    Set_winRate(0);
    Set_victory(0);
    Set_defeat(0);
    Set_experience(0);
//    Set_phone(phone);
//    Set_address(address);
//    Set_signature(signature);

}
void LandOwner::showCards()//显示手牌
{
    for(auto e : pile)
    {
        cout << e[1] << e[0] << ", ";
    }
    cout << endl;
}
void LandOwner::addCards(string *ptr)
{
    pile.push_back(ptr);
}
LandOwner::~LandOwner()
{
    cout << Get_name() << "已退出！" << endl;
}
