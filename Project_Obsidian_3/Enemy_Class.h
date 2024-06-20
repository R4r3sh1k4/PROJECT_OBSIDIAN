// Enemy.h

#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "Player_Class.h"

// Base class
class Enemy {
private:

    int HP;
    std::string Name;
    int damage;

protected:

    void set_HP(int hp);
    void set_Name(const std::string& nm);
    void set_Damage(int dmg);

public:

    Enemy();
    virtual ~Enemy();  // Virtual destructor

    virtual int get_HP() const;
    virtual std::string get_Name() const;
    virtual int get_Damage() const;

    virtual void display_Stats() const;

};

#endif // ENEMY_H
