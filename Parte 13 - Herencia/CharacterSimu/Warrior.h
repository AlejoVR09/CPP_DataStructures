#include <iostream>
#include "Character.h"

using namespace std;

class Warrior : public Character{
    public:
    void Tackle();
    void Fear();
    void toString();
    Warrior(string, int, int, int, int, int, int, int, int, int, int);
    

    private:
        string name;
        int health;
        int level;
        int physicDefense;
        int magicDefense;
        int speedMovement;
        int attackSpeed;
        int range;
        int strengh;
        int regHealth;
        int block;

};

void Warrior::toString()
{
    Character::toString();
    cout<<"Strengh: "<<strengh<<endl<<"Regeneration: "<<regHealth<<endl<<"Block: "<<block<<endl;
}

Warrior::Warrior(string _name, int _health, int _level, int phyDefense, int magDefense, int speedMov, int speedAtt, int _range, int _strengh, int _regHealth, int _block) : Character(_name, _health, _level, phyDefense, magDefense, speedMov, speedAtt, _range)
{
    strengh = _strengh;
    regHealth = _regHealth;
    block = _block;
};