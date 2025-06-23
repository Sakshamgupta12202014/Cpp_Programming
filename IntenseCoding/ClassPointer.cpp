#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << id << endl
             << price;
    }
};

int main()
{
    ShopItem *ptr = new ShopItem[3];
    ShopItem *temptr = ptr;
    int p;
    float q;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p;
        cin >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "The id and price of item " << i + 1 << endl;
        temptr->getdata();
        temptr   ++;
    }
    return 0;
}