#include "Cards.h"



Cards::Cards()
{
    pile.reserve(54);
    for(int i = 0; i < 54; i++)
    {
        card = new string[2];
        switch(i)
        {
            case 52 ://��С�������ó�����
                card[0] = "��";
                card[1] = "��";
                break;
            case 53 :
                card[0] = "��";
                card[1] = "С";
                break;
            default :
                switch((i+1) % 13)//ÿ13��Ϊһ��
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
                switch(int(i/13))//ÿ13��һ�ֻ�ɫ
                {
                    case 0 :
                        card[1] = "����";
                        break;
                    case 1 :
                        card[1] = "÷��";
                        break;
                    case 2 :
                        card[1] = "����";
                        break;
                    case 3 :
                        card[1] = "����";
                        break;
                    default:
                        cout << i << endl;
                        cout << "��ɫ�������" << endl;
                }
        }
        pile.push_back(card);
    }

}
string* Cards::draw()
{

    int num = get_nowCard();//��ȡ��ǰ�鵽���Ƶ�index
    set_nowCard(num+1);     //���µ�ǰ�Ƶ�index
    if(num + 1 == 54)       //��ʾ������
        cout << "���ѳ���" << endl;
    return pile[newPile[num]]; // �������³��һ���Ƶ���ֵ�ͻ�ɫ
}
void Cards::shuffle()
{
    srand((unsigned int)(time(NULL)));//�����
    for(int b = 0; b < 54; b++)//��ʼ������
        newPile[b] = 54;
    for(int i = 0; i < 54; i++)
    {

        int a = rand()%54;              //ȡ0-53�������
        while(find(newPile, newPile + 54,a) != (newPile + 54))//��֤�ǲ��ظ���
            a = rand()%54;
        newPile[i] = a;             //����ϴ�ú������
//        cout << newPile[i] << ", ";
    }
}
Cards::~Cards()
{
    for (int i = 0; i < pile.size();i++)
    {
        delete pile[i];
    }
    cout << "�ƶ���ɾ��" << endl;
}
