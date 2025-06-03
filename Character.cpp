#include "Character.h"
#include <iostream>
using namespace std;

//constructor definition
Character::Character(float h, int xPos, int yPos)
    : health(h), x(xPos), y(yPos) {
}

//updating character position
void Character::Move(int dx, int dy) {
    x += dx;
    y += dy;
}

//reducing helth
void Character::TakeDamage(float amount) {
    health -= amount;
    if (health < 0) health = 0;
}

//Default type description (overridable)
void Character::DisplayType() const {
    cout << "I am a generic character." << endl;
}