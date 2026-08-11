#include "Enemy.hpp"

Enemy::Enemy(std::string name, int hp)
	:	Entity(name, hp), m_hp(hp)
{
	cout << "+ Enemy " << m_name << endl;
}

Enemy::~Enemy() {
	cout << "- Enemy " << m_name << endl;
}

std::string Enemy::describe() const {
	if (currentHp() > 0)
		return( "Enemy " + m_name + " (" + std::to_string(currentHp()) + '/' + std::to_string(m_hp) + ")");
	return ( "Enemy " + m_name + " (" + std::to_string(currentHp()) + '/' + std::to_string(m_hp) + ")" + "[dead]");
}