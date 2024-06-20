// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <random>






// Base class
class Player {
private:
    int HP;
    std::string Class;
    int damage;
    int crit_chance;
    int crit_multiplier;

protected:
    void set_HP(int hp);
    void set_Class(const std::string& cls);
    void set_Damage(int dmg);
    void set_CritChance(int chance);
    void set_CritMultiplier(int multiplier);

public:
    Player();
    virtual ~Player();  // Virtual destructor

    virtual int get_HP() const;
    virtual std::string get_Class() const;
    virtual int get_Damage() const;
    virtual int get_CritChance() const;
    virtual int get_CritMultiplier() const;
    virtual bool Crit_Chance() const;
    virtual void display_Stats() const;
  
};

#endif // PLAYER_H