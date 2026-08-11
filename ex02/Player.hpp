#pragma once

#include "Entity.hpp"

class Player : public Entity {
    public:
        explicit Player(std::string name, int maxHp);          // name only: players have no hp here
        explicit Player(std::string name, int maxHp, int maxArmor);          // name only: players have no hp here
        void takeDamage(int amount);
        ~Player();
        std::string describe() const override;      // -> "Player <name>"
        int getArmor() const;
};
