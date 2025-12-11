#include "Thief.h"

#include <iostream>
#include <string>

using namespace std;

Thief::Thief(string nickname) : Player(nickname) { this->job_name = "Thief"; }

void Thief::attack() { cout << "도적의 표창" << endl; }
