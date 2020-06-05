#include "Cards.h"
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

Cards::Cards()
{
    pile.reserve(54);
    for(int i = 0; i < 54; i++)
    {
        card = new string[2];
        switch(i)
        {
            case 52 ://大小王单独拿出看来
                card[0] = "王";
                card[1] = "大";
                break;
            case 53 :
                card[0] = "王";
                card[1] = "小";
                break;
            default :
                switch((i+1) % 13)//每13张为一组
                {
                    case 1 :
                        card[0] = 'A';
                        break;
                    case 10 :
                        card[0] = "10";
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
                        card[0] = char((i+1)%13+'0');
                }
                switch(int(i/13))//每13张一种花色
                {
                    case 0 :
                        card[1] = "黑桃";
                        break;
                    case 1 :
                        card[1] = "梅花";
                        break;
                    case 2 :
                        card[1] = "方块";
                        break;
                    case 3 :
                        card[1] = "红桃";
                        break;
                    default:
                        cout << i << endl;
                        cout << "花色分配出错！" << endl;
                }
        }
        pile.push_back(card);
    }

}
void Cards::showCards(const vector<string *>& pile)
{
    cout << "***********" << endl;
//    copy(pile.cbegin(), pile.cend(), ostream_iterator<char>(cout, ", "));
//    cout << endl;
    for(auto e : pile)
    {
        cout << e[1] << e[0] << ", ";
    }
    cout << endl;
}
Cards::~Cards()
{
    for (int i = 0; i < pile.size();i++)
    {
        delete pile[i];
    }
    cout << "牌堆已删除" << endl;

}
