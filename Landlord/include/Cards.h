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
        void shuffle();//ϴ��
        vector<char *> get_pile(){return pile;}
        void showCards(const vector<char * >&);//��ʾ��

    protected:

    private:

        vector<char *> pile;//�ƶ�
        char card[2];//����[����, ��ɫ]
        int now;//��ǰ��index

};

#endif // CARDS_H
