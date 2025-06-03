#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

class Character {
protected:
    float health;
    int x, y;

    //constructor declaration
public:
    Character(float h, int x, int y);


    virtual ~Character() {}

    //declaring 2 basic behaviouurs
    void Move(int dx, int dy);
    void TakeDamage(float amount);

    virtual void DisplayType() const;
};

#endif // CHARACTER_H
