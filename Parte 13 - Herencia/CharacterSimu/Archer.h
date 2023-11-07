#include "Warrior.h"

using namespace std;

class Archer : public Character
{
    private:
    int BowSkill;
    int Critics;
    int Accuaracy;
    int Evasion;
        
    public:
        void ToxicArrow();
        void AccuaracyShoot();
        void Traps();
        void toString();
        Archer(string, int, int, int, int, int, int, int, int, int, int, int);
    
};

Archer::Archer(string _name, int _health, int _level, int phyDefense, int magDefense, int speedMov, int speedAtt, int _range, int _bowSkill, int _critics, int _Accuaracy, int _evasion) : Character(_name, _health, _level, phyDefense, magDefense, speedMov, speedAtt, _range)
{
    BowSkill = _bowSkill;
    Critics = _critics;
    Accuaracy = _Accuaracy;
    Evasion = _evasion;
}

void Archer::toString()
{
    Character::toString();
    cout<<"Bow Skill: "<<BowSkill<<endl<<"Critic Damage: "<<Critics<<endl<<"Accuaracy: "<<Accuaracy<<endl<<"Evasion: "<<Evasion<<endl;
}