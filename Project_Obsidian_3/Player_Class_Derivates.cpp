#include "Player_Class_Derivates.h"

// Warrior class
Warrior::Warrior() {
    setHP(120);
    setClass("Warrior");
    setDamage(15);
    setCritChance(5);
    setCritMultiplier(2);
}

Warrior::~Warrior() {}

// Mage class
Mage::Mage() {
    setHP(80);
    setClass("Mage");
    setDamage(25);
    setCritChance(10);
    setCritMultiplier(3);
}

Mage::~Mage() {}

// Archer class
Archer::Archer() {
    setHP(90);
    setClass("Archer");
    setDamage(20);
    setCritChance(15);
    setCritMultiplier(4);
}

Archer::~Archer() {}