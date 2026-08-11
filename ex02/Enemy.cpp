#include "Enemy.hpp"

Enemy::Enemy(std::string name, int hp)
	:	Entity(name, hp), m_hp(hp)
{
	cout << "+ Enemy " << m_name << endl;
}

Enemy::~Enemy() {
	cout << "- Entity " << m_name << endl;
}

std::string Enemy::describe() const {
	return( "Enemy " + m_name + " (" + "hp " + std::to_string(m_hp) + ")\n");
}