#include "Monster.h"

#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

Monster::Monster(string name)
    : name(name), HP(10), power(30), defence(10), speed(10) {}

void Monster::attack(Player* player) {
  const int damage = this->getPower() > player->getDefence()
                         ? this->getPower() - player->getDefence()
                         : 1;

  cout << "Monster Damage: " << damage << endl;
  const int playerHP = player->getHP() - damage;
  player->setHP(playerHP);

  if (playerHP > 0) {
    cout << "Player HP: " << playerHP << endl;
  }
}

// getter
string Monster::getName() { return this->name; }
int Monster::getHP() { return this->HP; }
int Monster::getPower() { return this->power; }
int Monster::getDefence() { return this->defence; }
int Monster::getSpeed() { return this->speed; }

// setter
void Monster::setName(string name) { this->name = name; }
void Monster::setHP(int HP) { this->HP = HP; }
void Monster::setPower(int power) { this->power = power; }
void Monster::setDefence(int defence) { this->defence = defence; }
void Monster::setSpeed(int speed) { this->speed = speed; }