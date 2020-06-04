#include <iostream>
#include<LandOwner.h>
#include<Cards.h>
#include<vector>
using namespace std;


int main()
{
//    LandOwner b("张三", "男", "18206061662", "南京", "17张你能秒我？");
//    LandOwner a;
//    a.Info();
//    b.Info();
    LandOwner * ptr_landOwner = new LandOwner();
    LandOwner * ptr_landOwner2 = new LandOwner("张三");
    LandOwner * ptr_landOwner3 = new LandOwner("李四", "男", "18205066166", "南京", "17张你能秒我？");
    ptr_landOwner3->Info();
    ptr_landOwner2->Info();
    ptr_landOwner->Info();
    delete ptr_landOwner;
    delete ptr_landOwner2;
    delete ptr_landOwner3;

    Cards * card = new Cards;
    vector<char *> cards = card->get_pile();
    card->showCards(cards);
    delete card;


    return 0;
}
