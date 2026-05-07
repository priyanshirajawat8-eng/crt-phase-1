#include<iostream>
using namespace std;
class Cricketer{
    string name;
    int run;
    public:
    Cricketer(string n, int r) {
        name = n;
        run = r;
    }
Cricketer(Cricketer &c){
    this->name = c.name;
    this->run = c.run;
}
void show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Run: "<<run<<endl;
}
};
int main(){
    Cricketer c1("Krishna" , 200);
    c1.show();
    Cricketer c2(c1);
    c2.show();
    return 0;
}