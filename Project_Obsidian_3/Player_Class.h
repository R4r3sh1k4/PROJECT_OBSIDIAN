// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

// Base class
class Player {
private:
    int HP;
    std::string Class;
    int damage;
    int crit_chance;
    int crit_multiplier;

protected:
    void setHP(int hp);
    void setClass(const std::string& cls);
    void setDamage(int dmg);
    void setCritChance(int chance);
    void setCritMultiplier(int multiplier);

public:
    Player();
    virtual ~Player();  // Virtual destructor

    virtual int getHP() const;
    virtual std::string getClass() const;
    virtual int getDamage() const;
    virtual int getCritChance() const;
    virtual int getCritMultiplier() const;

    virtual void displayStats() const;
};

#endif // PLAYER_H