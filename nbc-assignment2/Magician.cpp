#include "Magician.h"

#include <iostream>
#include <string>

#include "Monster.h"

using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
  this->job_name = "Magician";
}

void Magician::attack() { cout << "법사의 주문" << endl; }
void Magician::attack(Monster* monster) {
  const int hit = 1;
  const int damage = this->power > monster->getDefence()
                         ? this->power - monster->getDefence()
                         : 1;

  for (int i = 0; i < hit; i++) {
    const int hitDamage = damage > hit ? damage / hit : 1;
    cout << monster->getName() << "에게 마법으로 " << hitDamage
         << "의 피해를 입혔다!" << endl;
  }

  monster->setHP(monster->getHP() - damage);
  monster->getHP() > 0 ? cout << "Monster HP: " << monster->getHP() << endl
                       : cout << "Player WIN!" << endl;
}
