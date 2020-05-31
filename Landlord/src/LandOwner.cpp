#include "LandOwner.h"

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
LandOwner::~LandOwner()
{
    cout << Get_name() << "ÒÑÍË³ö£¡" << endl;
}
