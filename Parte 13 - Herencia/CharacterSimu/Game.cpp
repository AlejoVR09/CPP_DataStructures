#include <iostream>
#include "Mage.h"

using namespace std;

int main(){
    Character character("Alejo", 100, 15, 50, 50, 2, 1, 1);
    character.toString();
    cout<<endl;
    Warrior warrior("Luis", 100, 15, 50, 50, 2, 1, 1, 25, 25, 25);
    warrior.toString();
    cout<<endl;
    Archer archer("Luis", 100, 15, 50, 50, 2, 1, 1, 25, 25, 15, 12);
    archer.toString();
    cout<<endl;
    Mage mage("Luis", 100, 15, 50, 50, 2, 1, 1, 25, 8, 2, 1);
    mage.toString();
    return 0;
}


 