#include "Player_Class_Derivates.h"

// Gravis class
Gravis::Gravis() {
    set_HP(400);
    set_Class("Gravis");
    set_Damage(35);
    set_CritChance(35);
    set_CritMultiplier(2);
}

Gravis::~Gravis() {}

// Levis class
Levis::Levis() {
    set_HP(120);
    set_Class("Levis");
    set_Damage(60);
    set_CritChance(25);
    set_CritMultiplier(3);
}

Levis::~Levis() {}

// Burner class
Burner::Burner() {
    set_HP(150);
    set_Class("Burner");
    set_Damage(45);
    set_CritChance(30);
    set_CritMultiplier(4);
}

Burner::~Burner() {}


