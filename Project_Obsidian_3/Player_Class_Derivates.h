#// DerivedClasses.h

#ifndef DERIVEDCLASSES_H
#define DERIVEDCLASSES_H

#include "Player_Class.h"

// Derived class: Warrior
class Warrior : public Player {
public:
    Warrior();
    virtual ~Warrior();  // Virtual destructor
};

// Derived class: Mage
class Mage : public Player {
public:
    Mage();
    virtual ~Mage();  // Virtual destructor
};

// Derived class: Archer
class Archer : public Player {
public:
    Archer();
    virtual ~Archer();  // Virtual destructor
};

#endif // DERIVEDCLASSES_H