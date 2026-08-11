#include "Inventory.hpp"

#include <iostream>

Inventory::Inventory(const std::string& owner, std::initializer_list<std::string> items)
	: m_owner(owner), m_count(items.size()), m_items(new string[items.size()])
	{
		size_t i = 0;
		for (const auto&s : items)
			m_items[i++] = s;
		std::cout << "+ Inventory " << m_owner << " (";
		for (i = 0; i < m_count; ++i) {
			if (i > 0)
				std::cout << ", ";
			std::cout << m_items[i];
		}
		std::cout << ')' << std::endl;
	}

Inventory::~Inventory() {
	std::cout << "- Inventory " << m_owner << " (";
	size_t i = 0;
	for (i = 0; i < m_count; ++i) {
			if (i > 0)
				std::cout << ", ";
			std::cout << m_items[i];
		}
	std::cout << ')' << std::endl;
	delete[] m_items;
}