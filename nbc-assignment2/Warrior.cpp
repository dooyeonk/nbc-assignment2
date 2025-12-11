#include "Warrior.h"

#include <iostream>
#include <string>

using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
  this->job_name = "Warriror";
}

void Warrior::attack() { cout << "Àü»çÀÇ ÁÖ¸Ô" << endl; }
