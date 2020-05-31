#include "LandOwner.h"

LandOwner::LandOwner() //默认虚构函数初始化部分属性
{
    Set_name("默认地主");
    Set_sex("未知");
    Set_gold(1000);
    Set_winRate(0);
    Set_victory(0);
    Set_defeat(0);
    Set_experience(0);
    Set_phone("未知");
    Set_address("未知");
    Set_signature("未知");
}
LandOwner::LandOwner(string name, string sex, string phone, string address, string signature)
{
    Set_name(name);
    Set_sex(sex);
    Set_gold(1000);
    Set_winRate(0);
    Set_victory(0);
    Set_defeat(0);
    Set_experience(0);
    Set_phone(phone);
    Set_address(address);
    Set_signature(signature);

}
LandOwner::~LandOwner()
{
    //dtor
}
