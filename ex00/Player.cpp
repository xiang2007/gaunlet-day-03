#include "Player.hpp"

Player::Player(std::string name)
	: Entity(std::move(name))
{
}

Player::~Player() {}

std::string Player::describe() const {
	return( "Player " + m_name + '\n');
}