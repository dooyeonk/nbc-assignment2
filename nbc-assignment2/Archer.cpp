#include "Archer.h"

#include <iostream>
#include <string>

using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
  this->job_name = "Archer";
}

void Archer::attack() { cout << "미간에 화살"; }
