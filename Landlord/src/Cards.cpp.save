#include "Cards.h"
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

Cards::Cards()
{
    pile.reserve(54);
    for(int i = 1; i < 55; i++)
    {
        switch(i)
        {
            case 53 :
                card[0] = '王';
                card[1] = '大';
                break;
            case 54 :
                card[0] = '王';
                card[1] = '小';
                break;
            default :
                switch(i % 13)//每13张为一组
                {
                    case 1 :
                        card[0] = 'A';
                        break;
                    case 11 :
                        card[0] = 'J';
                        break;
                    case 12 :
                        card[0] = 'Q';
                        break;
                    case 0 :
                        card[0] = 'K';
                        break;
                    default :
        //                cout << i%13 << endl;
                        card[0] = char(i%13+'0');
                }
                switch(int(i/13))//每13张一种花色
                {
                    case 0 :
                        card[1] = '1';
                        break;
                    case 1 :
                        card[1] = '2';
                        break;
                    case 2 :
                        card[1] = '3';
                        break;
                    case 3 :
                        card[1] = '4';
                        break;
                    case 4 :
                        card[1] = '4';
                        break;
                    default:
                        cout << i << endl;
                        cout << "花色分配出错！" << endl;
                }
        }
        pile.push_back(card);
    }

}
void Cards::showCards(const vector<char *>& pile)
{
    cout << "***********" << endl;
//    copy(pile.cbegin(), pile.cend(), ostream_iterator<char>(cout, ", "));
//    cout << endl;
    for(auto e : pile)
    {
        cout << e[1]+e[0] << ", ";
    }
    cout << endl;
}
Cards::~Cards()
{
    cout << "牌堆已删除" << endl;
}
