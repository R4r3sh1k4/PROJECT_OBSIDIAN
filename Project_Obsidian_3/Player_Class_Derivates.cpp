#include "Player_Class_Derivates.h"

// Gravis class
Gravis::Gravis() {
    set_HP(120);
    set_Class("Gravis");
    set_Damage(15);
    set_CritChance(5);
    set_CritMultiplier(2);
}

Gravis::~Gravis() {}

// Levis class
Levis::Levis() {
    set_HP(80);
    set_Class("Levis");
    set_Damage(25);
    set_CritChance(10);
    set_CritMultiplier(3);
}

Levis::~Levis() {}

// Burner class
Burner::Burner() {
    set_HP(90);
    set_Class("Burner");
    set_Damage(20);
    set_CritChance(15);
    set_CritMultiplier(4);
}

Burner::~Burner() {}