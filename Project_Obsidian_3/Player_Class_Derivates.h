#// DerivedClasses.h

#ifndef DERIVEDCLASSES_H
#define DERIVEDCLASSES_H

#include "Player_Class.h"

// Derived class: Gravis
class Gravis : public Player {
public:
    Gravis();
    virtual ~Gravis();  // Virtual destructor
};

// Derived class: levis
class Levis : public Player {
public:
    Levis();
    virtual ~Levis();  // Virtual destructor
};

// Derived class: Burner
class Burner : public Player {
public:
    Burner();
    virtual ~Burner();  // Virtual destructor
};

#endif // DERIVEDCLASSES_H