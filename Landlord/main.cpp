#include <iostream>
#include<LandOwner.h>
using namespace std;

int main()
{
    LandOwner b("张三", "男", "18206061662", "南京", "17张你能秒我？");
    LandOwner a;
    a.Info();
    b.Info();
    return 0;
}
