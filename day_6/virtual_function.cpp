#include<iostream>
using namespace std;
class Player{
    public:
    virtual void show()
    {
        cout<<"Player class show function"<< endl;
    }
};
class cricketer : public Player{
    public:
    void show()
      cout <<"Cricketer class show function"<< endl;
};

p