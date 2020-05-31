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

        //��ʾ�û���ϸ��Ϣ
        void Info()
        {
            cout << "������" << Get_name() << endl;
            cout << "�Ա�" << Get_sex() << endl;
            cout << "��ң�" << Get_gold() << endl;
            cout << "ʤ�ʣ�" << Get_winRate()*100 << '%' << '(' << "ʤ��" << Get_victory() << ' ' << "����" << Get_defeat() << ')' << endl ;
            cout << "���飺" << int(Get_experience()/1024) << "��" << '(' << Get_experience() << '/' << int(Get_experience()/1024+1)*1024<< ')' << endl;
            cout << "�绰��" << Get_phone() << endl;
            cout << "��ַ��" << Get_address() << endl;
            cout << "����ǩ����" << Get_signature() << endl;
        }

    protected:

    private:
        string _name;       //����
        string _sex;        //�Ա�
        long _gold;         //���
        float _winRate;     //ʤ��
        int _victory;       //ʤ����
        int _defeat;        //������
        long _experience;   //����
        string _phone;         //�绰
        string _address;    //��ַ
        string _signature;  //ǩ��
};

#endif // LANDOWNER_H
