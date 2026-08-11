#include "Enemy.hpp"

Enemy::Enemy(std::string name, int hp, std::initializer_list<std::string> loot)
	:	Entity(name), m_hp(hp), m_bag(name, loot)
{
	cout << "+ Enemy " << m_name << endl;
}

Enemy::~Enemy() {
	cout << "- Entity " << m_name << endl;
}

std::string Enemy::describe() const {
	return( "Enemy " + m_name + " (" + "hp " + std::to_string(m_hp) + ")\n");
}