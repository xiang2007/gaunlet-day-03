#pragma once

#include "Entity.hpp"

class Enemy : public Entity {
public:
    Enemy(std::string name, int hp);            // name AND hp, both required
	~Enemy();
    std::string describe() const override;      // -> "Enemy <name> (hp N)"
private:
    int m_hp;
};