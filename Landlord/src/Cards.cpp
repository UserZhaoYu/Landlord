#include "Cards.h"



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
string* Cards::draw()
{

    int num = get_nowCard();//获取当前抽到的牌的index
    set_nowCard(num+1);     //更新当前牌的index
    if(num + 1 == 54)       //提示抽完了
        cout << "牌已抽完" << endl;
    return pile[newPile[num]]; // 返回最新抽的一张牌的面值和花色
}
void Cards::shuffle()
{
    srand((unsigned int)(time(NULL)));//随机数
    for(int b = 0; b < 54; b++)//初始化数组
        newPile[b] = 54;
    for(int i = 0; i < 54; i++)
    {

        int a = rand()%54;              //取0-53的随机数
        while(find(newPile, newPile + 54,a) != (newPile + 54))//保证是不重复的
            a = rand()%54;
        newPile[i] = a;             //放置洗好后的牌序
//        cout << newPile[i] << ", ";
    }
}
Cards::~Cards()
{
    for (int i = 0; i < pile.size();i++)
    {
        delete pile[i];
    }
    cout << "牌堆已删除" << endl;
}
