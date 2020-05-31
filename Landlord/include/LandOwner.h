#ifndef LANDOWNER_H
#define LANDOWNER_H
#include<iostream>
#include<string>
using namespace std;

class LandOwner
{
    public:
        LandOwner();
        LandOwner(string, string, string, string, string);
        ~LandOwner();

        string Get_name() { return _name; }
        void Set_name(string val) { _name = val; }
        string Get_sex() { return _sex; }
        void Set_sex(string val) { _sex = val; }
        long Get_gold() { return _gold; }
        void Set_gold(long val) { _gold = val; }
        float Get_winRate() { return _winRate; }
        void Set_winRate(float val) { _winRate = val; }
        int Get_victory() { return _victory; }
        void Set_victory(int val) { _victory = val; }
        int Get_defeat() { return _defeat; }
        void Set_defeat(int val) { _defeat = val; }
        long Get_experience() { return _experience; }
        void Set_experience(long val) { _experience = val; }
        string Get_phone() { return _phone; }
        void Set_phone(string val) { _phone = val; }
        string Get_address() { return _address; }
        void Set_address(string val) { _address = val; }
        string Get_signature() { return _signature; }
        void Set_signature(string val) { _signature = val; }

        //显示用户详细信息
        void Info()
        {
            cout << "姓名：" << Get_name() << endl;
            cout << "性别：" << Get_sex() << endl;
            cout << "金币：" << Get_gold() << endl;
            cout << "胜率：" << Get_winRate()*100 << '%' << '(' << "胜：" << Get_victory() << ' ' << "负：" << Get_defeat() << ')' << endl ;
            cout << "经验：" << int(Get_experience()/1024) << "级" << '(' << Get_experience() << '/' << int(Get_experience()/1024+1)*1024<< ')' << endl;
            cout << "电话：" << Get_phone() << endl;
            cout << "地址：" << Get_address() << endl;
            cout << "个性签名：" << Get_signature() << endl;
        }

    protected:

    private:
        string _name;       //姓名
        string _sex;        //性别
        long _gold;         //金币
        float _winRate;     //胜率
        int _victory;       //胜场数
        int _defeat;        //负场数
        long _experience;   //经验
        string _phone;         //电话
        string _address;    //地址
        string _signature;  //签名
};

#endif // LANDOWNER_H
