#include "LandOwner.h"

LandOwner::LandOwner() //Ĭ���鹹������ʼ����������
{
    Set_name("Ĭ�ϵ���");
    Set_sex("δ֪");
    Set_gold(1000);
    Set_winRate(0);
    Set_victory(0);
    Set_defeat(0);
    Set_experience(0);
    Set_phone("δ֪");
    Set_address("δ֪");
    Set_signature("δ֪");
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
