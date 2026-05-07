#include<iostream>
using namespace std;
class player
{
    public:
    string name;
    int age;
    void setName(string n)
    {
        name = n;
    }
};
class Cricketer : public player{
    public:
    int runs;
}