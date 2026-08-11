#pragma once

#include <string>
#include <iostream>
#include "Inventory.hpp"

using namespace std;

class Entity {
public:
    explicit Entity(std::string name);
    virtual std::string describe() const= 0;   // pure virtual
    virtual ~Entity();                           // virtual!
protected:
    std::string m_name;
};