#include <iostream>
using namespace std;
class Character {
    public:
    void Buy();
    void takePotion();
    void toString();
    Character(string, int, int, int, int, int, int, int);

    private:
        string name;
        int health;
        int level;
        int physicDefense;
        int magicDefense;
        int speedMovement;
        int attackSpeed;
        int range;
};

void Character::toString()
{
    cout<<"Name: "<<name<<endl<<"Level: "<<level<<endl<<"Physic Defense: "<<physicDefense<<endl<<"Magic Defense: "<<magicDefense<<endl
    <<"Speed Moevement: "<<speedMovement<<endl<<"Attack Speed: "<<attackSpeed<<endl<<"Range: "<<range<<endl;
}

Character::Character(string _name, int _health, int _level, int phyDefense, int magDefense, int speedMov, int speedAtt, int _range)
{
    name = _name;
    health = _health;
    level = _level;
    physicDefense = phyDefense;
    magicDefense = magDefense;
    speedMovement = speedMov;
    attackSpeed = speedAtt;
    range = _range;
};