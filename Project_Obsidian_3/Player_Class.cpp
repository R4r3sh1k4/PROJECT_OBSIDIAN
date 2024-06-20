// Player.cpp

#include "Player_Class.h"


// Constructor
Player::Player() : HP(100), Class(""), damage(10), crit_chance(0), crit_multiplier(0) {}

// Virtual destructor
Player::~Player() {}

// Protected setters
void Player::set_HP(int hp) {
    HP = hp;
}

void Player::set_Class(const std::string& cls) {
    Class = cls;
}

void Player::set_Damage(int dmg) {
    damage = dmg;
}

void Player::set_CritChance(int chance) {
    crit_chance = chance;
}

void Player::set_CritMultiplier(int multiplier) {
    crit_multiplier = multiplier;
}

// Getters
int Player::get_HP() const {
    return HP;
}

std::string Player::get_Class() const {
    return Class;
}

int Player::get_Damage() const {
    return damage;
}

int Player::get_CritChance() const {
    return crit_chance;
}

int Player::get_CritMultiplier() const {
    return crit_multiplier;
}

// Display stats
void Player::display_Stats() const {
    std::cout << "Class: " << get_Class() << std::endl;
    std::cout << "HP: " << get_HP() << std::endl;
    std::cout << "Damage: " << get_Damage() << std::endl;
    std::cout << "Crit Chance: " << get_CritChance() << "%" << std::endl;
    std::cout << "Crit Multiplier: " << get_CritMultiplier() << "x" << std::endl;
}

bool Player::Crit_Chance() const {

    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dis(1, 100);

    int random_number = dis(gen);
    return random_number <= crit_chance;


}
/*
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


T H I S   N E E D S   T O   B E   C H A N G E D   F O R   T H E   F U N C T I O N   W H O   A S S I G N E S   T H E

P L A Y E R   A   C L A S S   I N S I D E :    "Misc_Functions.cpp"


D O  N O T  F O R G E T  P L S :3



!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
