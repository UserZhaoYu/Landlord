#include <iostream>
#include<LandOwner.h>
#include<Cards.h>
#include<vector>
using namespace std;


int main()
{
//    LandOwner b("����", "��", "18206061662", "�Ͼ�", "17���������ң�");
//    LandOwner a;
//    a.Info();
//    b.Info();
    LandOwner * ptr_landOwner = new LandOwner();
    LandOwner * ptr_landOwner2 = new LandOwner("����");
    LandOwner * ptr_landOwner3 = new LandOwner("����", "��", "18205066166", "�Ͼ�", "17���������ң�");
    ptr_landOwner3->Info();
    ptr_landOwner2->Info();
    ptr_landOwner->Info();
    delete ptr_landOwner;
    delete ptr_landOwner2;
    delete ptr_landOwner3;

    Cards * card = new Cards;
    vector<string *> cards = card->get_pile();
    card->showCards(cards);
    delete card;


    return 0;
}
