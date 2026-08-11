#include "Player.hpp"

Player::Player(std::string name, int maxHp)
	: Entity(std::move(name), maxHp)
{
	cout << "+ Player " << m_name << endl;
}

Player::Player(std::string name, int maxHp, int maxArmor)
	: Entity(std::move(name), maxHp, maxArmor)
{
	cout << "+ Player " << m_name << endl;
}


Player::~Player() {
	cout << "- Player " << m_name << endl;
}

std::string Player::describe() const {
	return( "Player " + m_name + " (" + std::to_string(currentHp()) + '/' + std::to_string(maxHp()) + ", Armor " + std::to_string(m_armor) + ')');
}

void Player::takeDamage(int amount){
	int reduced = std::max(1, amount - m_armor);
	std::cout << m_name << "'s armor soaks " << (amount - reduced) << '\n';
	Entity::takeDamage(reduced);   // delegate: base applies the hit and logs it
}
