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
        string* draw();//���ƣ�����һ������
        void shuffle();//ϴ��

    protected:

    private:

        vector<string *> pile;//��ʼ�ƶ�
        string* card = nullptr;//����[����, ��ɫ]
        int newPile[54];//ϴ�������
        int nowCard = 0;//��ǰ��index

};

#endif // CARDS_H
