#pragma once
#include <string>

#include "Monster.h"
#include "Player.h"
using namespace std;

class Archer : public Player {
 public:
  Archer(string nickname);

  void attack() override;
  void attack(Monster* monster) override;
};
