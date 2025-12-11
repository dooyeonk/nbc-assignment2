#include "Player.h"

#include <iostream>
#include <string>

using namespace std;

void Player::printPlayerStatus() {
  cout << "------------------------------------" << endl;
  cout << "* 현재 능력치" << endl;
  cout << "닉네임: " << nickname << endl;
  cout << "Lv. " << level << endl;
  cout << "HP: " << HP << endl;
  cout << "MP: " << MP << endl;
  cout << "공격력: " << power << endl;
  cout << "방어력: " << defence << endl;
  cout << "정확도: " << accuracy << endl;
  cout << "속도: " << speed << endl;
  cout << "------------------------------------" << endl;
}

// getter
string Player::getJobName() { return this->job_name; }
string Player::getNickname() { return this->nickname; }
int Player::getLevel() { return this->level; }
int Player::getHP() { return this->HP; }
int Player::getMP() { return this->MP; }
int Player::getPower() { return this->power; }
int Player::getDefence() { return this->defence; }
int Player::getAccuracy() { return this->accuracy; }
int Player::getSpeed() { return this->speed; }

// setter
void Player::setNickname(string nickname) { this->nickname = nickname; }
void Player::setHP(int HP) { this->HP = HP; }
void Player::setMP(int MP) { this->MP = MP; }
void Player::setPower(int power) { this->power = power; }
void Player::setDefence(int defence) { this->defence = defence; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setSpeed(int speed) { this->speed = speed; }
