#pragma once

#include <string>
#include <iostream>
#include <cmath>
#include "Inventory.hpp"

using namespace std;

// Entity.hpp (additions)
class Entity {
public:
    Entity(std::string name, int maxHp, int armor = 0);
    virtual void        takeDamage(int amount);   // default: full damage
    void                heal(int amount);
    bool                isAlive() const;          // currentHp > 0
    int                 currentHp() const;
    int                 maxHp() const;
    virtual std::string describe() const= 0;
    virtual ~Entity();
protected:
    std::string m_name;
    int m_armor;
private:
    int m_maxHp;
    int m_currentHp;   // invariant: 0 <= m_currentHp <= m_maxHp; only the methods below touch it
};
