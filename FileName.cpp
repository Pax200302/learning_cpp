#include <iostream>
#include <cstdlib>
using namespace std;

class base
{
public:
    int a;
    base()
    {
        a = 10;
    }
    void dudu()
    {
        cout << "父类成员函数\n";
    }
};
class son1 :public base
{
public:
    int a;
    son1()
    {
        a=12;
    }
    void dudu()
    {
        cout << "子类成员函数\n";
    }
};
void test()
{
    son1 p;
    cout << p.a << endl;
    cout << p.base::a << endl;
    p.dudu();
    p.base::dudu();
}
int main()
{
    test();
    system("pause");
    return 0;
}