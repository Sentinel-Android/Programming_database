#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    Hero(int health){
        this->health=health;
    }
};

int main()
{
    Hero ramesh(5);
    cout<<ramesh.health;
    return 0;
}