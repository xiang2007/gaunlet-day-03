#pragma once

#include <string>
#include <iostream>

using namespace std;

class Entity {
public:
    explicit Entity(std::string name);
    virtual std::string describe() const= 0;   // pure virtual
    virtual ~Entity();                           // virtual!
protected:
    std::string m_name;
};