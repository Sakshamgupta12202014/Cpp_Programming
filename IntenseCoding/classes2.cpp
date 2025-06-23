/*Nested member function in c++
in classes. */

#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void display(void);
    void ones_compliment(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "\nIncorrect binary format";
            exit(0);
        }
    }
}

void Binary ::display(void)
{
    cout << "\nDisplaying binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

void Binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

/*Shop's item management system: */
class Shop
{
    int itemid[30];
    int itemprice[30];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void Shop::setprice()
{
    
    cout << "enter the id of item no. " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter the price of item no. " << counter + 1 << endl;
    cin >> itemprice[counter];
    counter++;
}

void Shop::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of itemid " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    // Binary b;
    // b.read();
    // b.display();
    // b.ones_compliment();
    // b.display();

    /*Using arrays inside classes: */
    Shop shop[3];
    for(int i=0;i<3;i++){
        shop[i].initcounter();
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<"Setprice of shop no. "<<i+1<<endl;
        shop[i].setprice();
    }

    cout<<"-----------------Displaying the prices of items of all shops-----------------"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Items of shop no. "<<i+1<<endl;
        shop[i].displayprice();
    }
    return 0;
}