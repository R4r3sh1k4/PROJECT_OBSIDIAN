#pragma once
#ifndef DERIVEDENEMIES_H
#define DERIVEDENEMIES_H

#include "Enemy_Class.h"

// Derived class: TheGuardian
class TheGuardian : public Enemy {
public:
    TheGuardian();
    virtual ~TheGuardian();  // Virtual destructor
};

// Derived class: TheProsper
class TheProsper : public Enemy {
public:
    TheProsper();
    virtual ~TheProsper();  // Virtual destructor
};

// Derived class: TheBishop
class TheBishop : public Enemy {
public:
    TheBishop();
    virtual ~TheBishop();  // Virtual destructor
};

// Derived class: TheGrandInquisitor
class TheGrandInquisitor : public Enemy {
public:
    TheGrandInquisitor();
    virtual ~TheGrandInquisitor();  // Virtual destructor
};

#endif // DERIVEDENEMIES_H
