#include "Entity.hpp"

Entity::Entity(std::string name) 
	: m_name(std::move(name))
{
	cout << "+ Entity " << m_name << endl;
}

Entity::~Entity() {
	cout << "- Entity " << m_name << endl;
}
