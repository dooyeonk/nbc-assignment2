#include "Archer.h"

#include <iostream>
#include <string>

#include "Monster.h"

using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
  this->job_name = "Archer";
}

void Archer::attack() { cout << "미간에 화살"; }
void Archer::attack(Monster* monster) {
  const int hit = 3;
  const int damage = this->power > monster->getDefence()
                         ? this->power - monster->getDefence()
                         : 1;

  for (int i = 0; i < hit; i++) {
    const int hitDamage = damage > hit ? damage / hit : 1;
    cout << monster->getName() << "에게 화살로 " << hitDamage
         << "의 피해를 입혔다!" << endl;
  }

  monster->setHP(monster->getHP() - damage);
  monster->getHP() > 0 ? cout << "Monster HP: " << monster->getHP() << endl
                       : cout << "Player WIN!" << endl;
}
