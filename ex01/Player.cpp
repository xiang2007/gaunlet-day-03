#include "Player.hpp"

Player::Player(std::string name)
	: Entity(std::move(name))
{
	cout << "+ Player " << m_name << endl;
}

Player::~Player() {
	cout << "- Player " << m_name << endl;
}

std::string Player::describe() const {
	return( "Player " + m_name);
}