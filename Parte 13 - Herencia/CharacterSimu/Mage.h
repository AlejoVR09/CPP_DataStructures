#include "Archer.h"

using namespace std;

class Mage : public Character
{
    private:
    int Mana;
    int Intelligence;
    int RegMana;
    int ControlMana;
        
    public:
        void Invocation();
        void FireBole();
        void Curse();
        void TP();
        void toString();
        Mage(string, int, int, int, int, int, int, int, int, int, int, int);
    
};

Mage::Mage(string _name, int _health, int _level, int phyDefense, int magDefense, int speedMov, int speedAtt, int _range, int _mana, int _intelligence, int _regMana, int _controlMana) : Character(_name, _health, _level, phyDefense, magDefense, speedMov, speedAtt, _range)
{
    Mana = _mana;
    Intelligence = _intelligence;
    RegMana = _regMana;
    ControlMana = _controlMana;
}

void Mage::toString()
{
    Character::toString();
    cout<<"Mana: "<<Mana<<endl<<"Intelligence: "<<Intelligence<<endl<<"Mana Regeneration: "<<RegMana<<endl<<"Mana Control: "<<ControlMana<<endl;
}
