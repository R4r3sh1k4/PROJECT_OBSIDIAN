// Player.cpp

#include "Player_Class.h"


// Constructor
Player::Player() : HP(100), Class(""), damage(10), crit_chance(0), crit_multiplier(0) {}

// Virtual destructor
Player::~Player() {}

// Protected setters
void Player::setHP(int hp) {
    HP = hp;
}

void Player::setClass(const std::string& cls) {
    Class = cls;
}

void Player::setDamage(int dmg) {
    damage = dmg;
}

void Player::setCritChance(int chance) {
    crit_chance = chance;
}

void Player::setCritMultiplier(int multiplier) {
    crit_multiplier = multiplier;
}

// Getters
int Player::getHP() const {
    return HP;
}

std::string Player::getClass() const {
    return Class;
}

int Player::getDamage() const {
    return damage;
}

int Player::getCritChance() const {
    return crit_chance;
}

int Player::getCritMultiplier() const {
    return crit_multiplier;
}

// Display stats
void Player::displayStats() const {
    std::cout << "Class: " << getClass() << std::endl;
    std::cout << "HP: " << getHP() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Crit Chance: " << getCritChance() << "%" << std::endl;
    std::cout << "Crit Multiplier: " << getCritMultiplier() << "x" << std::endl;
}

