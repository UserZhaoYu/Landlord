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
        void shuffle();//ϴ��
        vector<string *> get_pile(){return pile;}
        int get_nowCard(){return nowCard;}
        void set_nowCard(int _nowCard){nowCard = _nowCard;}
        string* draw();//���ƣ�����һ������

    protected:

    private:

        vector<string *> pile;//�ƶ�
        string* card = nullptr;//����[����, ��ɫ]
        int nowCard = 0;//��ǰ��index

};

#endif // CARDS_H
