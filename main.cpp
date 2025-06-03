
#include "Player.h"
#include "Enemy.h"

int main() {
    Character* p1 = new Player(100.0f, 0, 0);
    Character* e1 = new Enemy(80.0f, 5, 5);

    p1->DisplayType();  // Desplay I'm a Player.
    e1->DisplayType();  // Desplay I'm an Enemy.

    delete p1;
    delete e1;

    return 0;
}