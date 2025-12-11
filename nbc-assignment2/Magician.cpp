#include "Magician.h"

#include <iostream>
#include <string>

using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
  this->job_name = "Magician";
}

void Magician::attack() { cout << "법사의 주문"; }
