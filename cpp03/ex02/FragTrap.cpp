#include "include/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap: String constructor called: A wild " << name << " appeared" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); 
    }
    std::cout << "FragTrap: Assignment operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructor called for " << name << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->hit_points == 0)
	{
		std::cout << "FragTrap " << this->name << " is dead"<< std::endl;
		return;
	}
	if (this->energy_points == 0)
	{
		std::cout << "FragTrap " << this->name << " is useless"<< std::endl;
		return;
	}
	this->energy_points -= 1;
	std::cout << "FragTrap " << this->name << " attacks " << target << " ";
	std::cout << this->attack_damage << " Points of damage was done" <<std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << name << "FragTrap: I want a legendariest of high fives!" << std::endl;
}