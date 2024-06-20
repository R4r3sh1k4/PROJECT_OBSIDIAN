
#include "Enemy_Class.h"
#include <iostream>

// Constructor
Enemy::Enemy() : HP(100), Name(""), damage(10) {}

// Virtual destructor
Enemy::~Enemy() {}

// Protected setters
void Enemy::set_HP(int hp) {
    HP = hp;
}

void Enemy::set_Name(const std::string& nm) {
    Name = nm;
}

void Enemy::set_Damage(int dmg) {
    damage = dmg;
}

// Getters
int Enemy::get_HP() const {
    return HP;
}

std::string Enemy::get_Name() const {
    return Name;
}

int Enemy::get_Damage() const {
    return damage;
}

// Display stats
void Enemy::display_Stats() const {
    std::cout << "Name: " << get_Name() << std::endl;
    std::cout << "HP: " << get_HP() << std::endl;
    std::cout << "Damage: " << get_Damage() << std::endl;
}
